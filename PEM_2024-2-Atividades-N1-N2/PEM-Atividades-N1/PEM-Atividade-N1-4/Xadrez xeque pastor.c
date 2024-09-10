/*-------------------------------------------------------*
* Disciplina: Programação Estruturada e Modular          *
*          Prof. Carlos Veríssimo                        *
*--------------------------------------------------------*
* Objetivo do Programa: Um tabuleiro de xadrez simulando um xeque pastor
* Data - 10/09/2024                                      *
* Autor: Pedro Lucas Rocha Ferraz                        *
*--------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

char pecasBrancas[8][4] = {" T ", " C ", " B ", " D ", " R ", " B ", " C ", " T "};
char peoesBrancos[8][4] = {" P ", " P ", " P ", " P ", " P ", " P ", " P ", " P "};
char linhaVazia1[8][4] = {"", "", "", "", "", "", "", ""};
char linhaVazia2[8][4] = {"", "", "", "", "", "", "", ""};
char linhaVazia3[8][4] = {"", "", "", "", "", "", "", ""};
char linhaVazia4[8][4] = {"", "", "", "", "", "", "", ""};
char peoesPretos[8][4] = {" p ", " p ", " p ", " p ", " p ", " p ", " p ", " p "};
char pecasPretas[8][4] = {" t ", " c ", " b ", " d ", " r ", " b ", " c ", " t "};

void mostrarTabuleiro() {
    printf("     a   b   c   d   e   f   g   h\n");
    printf("   --------------------------------\n");

    printf("8| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", pecasPretas[i]);
    }
    printf("\n");
    
    printf("7| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", peoesPretos[i]);
    }
    printf("\n");
    
    printf("6| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", linhaVazia4[i]);
    }
    printf("\n");
    
    printf("5| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", linhaVazia3[i]);
    }
    printf("\n");
    
    printf("4| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", linhaVazia2[i]);
    }
    printf("\n");
    
    printf("3| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", linhaVazia1[i]);
    }
    printf("\n");
    
    printf("2| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", peoesBrancos[i]);
    }
    printf("\n");
    
    printf("1| ");
    for (int i = 0; i < 8; i++) {
        printf("%-4s", pecasBrancas[i]);
    }
    printf("\n");
}
int main() {
    printf("    --------------------------------\n");
    printf("          INICIO DA PARTIDA\n");
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 1 - BRANCO JOGA\n");
    strcpy(linhaVazia2[4], " P ");
    strcpy(peoesBrancos[4], "...");    
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 2 - PRETO JOGA\n");
    strcpy(linhaVazia3[4], " p ");
    strcpy(peoesPretos[4], "...");    
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 3 - BRANCO JOGA\n");
    strcpy(pecasBrancas[5], "...");    
    strcpy(linhaVazia2[2], " B ");
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 4 - PRETO JOGA\n");
    strcpy(pecasPretas[1], "...");    
    strcpy(linhaVazia4[2], " c ");
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 5 - BRANCO JOGA\n");
    strcpy(pecasBrancas[3], "...");    
    strcpy(linhaVazia3[7], " D ");
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 6 - PRETO JOGA\n");
    strcpy(pecasPretas[6], "...");    
    strcpy(linhaVazia4[5], " c ");
    mostrarTabuleiro();
    printf("----------------------------------");

    printf("\n          JOGADA 7 - BRANCO JOGA\n");
    strcpy(linhaVazia3[7], "...");    
    strcpy(peoesBrancos[4], "...");    
    strcpy(peoesPretos[5], " D ");
    mostrarTabuleiro();
    printf("----------------------------------");
    printf("\n");
    printf("\n XEQUE MATE, FIM DE JOGO");
    
    return 0;
}