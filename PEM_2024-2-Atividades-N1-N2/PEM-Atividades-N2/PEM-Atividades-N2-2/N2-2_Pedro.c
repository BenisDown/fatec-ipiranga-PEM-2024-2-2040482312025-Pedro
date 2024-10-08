/*-----------------------------------------------------------*
* Disciplina: Programaçao Estruturada e Modular              *
*          Prof. Carlos Veríssimo                            *
*------------------------------------------------------------*
* Objetivo do Programa: Comparação insertion com bubble sort *
* Data : 08/10/2024                                          *
* Autor: Pedro Lucas Rocha Ferraz                            *
-------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void printArray(int array[], int size);
void bubbleSort(int array[], int n, int *trocas, int *ciclos);
void change(int *XP, int *YP);

void PrintArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void bubbleSort(int array[], int n, int *trocas, int *ciclos) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            (*ciclos)++; // Conta ciclos (comparações)
            if (array[j] > array[j + 1]) {
                change(&array[j], &array[j + 1]);
                (*trocas)++; // Conta trocas
            }
        }
    }
}

void change(int *XP, int *YP) {
    int temp = *XP;
    *XP = *YP;
    *YP = temp;
}

int main() {
    // Marca o tempo de inicio
    clock_t start_time = clock();

    // Vetor com os valores a serem ordenados
    int array[] = {
        5, 3, 8, 4, 2,
        115, 113, 118, 114, 112,
        125, 123, 128, 124, 122,
        35, 33, 38, 34, 32,
        45, 43, 48, 44, 42,
        55, 53, 58, 54, 52,
        65, 63, 68, 64, 62,
        75, 73, 78, 74, 72,
        85, 83, 88, 84, 82,
        95, 93, 98, 94, 92,
        15, 13, 18, 14, 12,
        25, 23, 28, 24, 22
    };

    // Numero de elementos do vetor
    int n = sizeof(array) / sizeof(array[0]);

    // Variaveis para contar o numero de trocas e ciclos
    int trocas = 0;
    int ciclos = 0;

    // Chama a funcao de ordenacao e passa os ponteiros para as variaveis
    bubbleSort(array, n, &trocas, &ciclos);

    // Marca o tempo de fim
    clock_t end_time = clock();

    // Calcula o tempo de execucao
    double cpu_time_used = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Imprime o tempo de execucao
    printf("Tempo de execucao: %f segundos\n", cpu_time_used);

    // Imprime o numero de trocas
    printf("Numero de trocas: %d\n", trocas);

    // Imprime o numero de ciclos
    printf("Numero de ciclos: %d\n", ciclos);


    return 0;
}
