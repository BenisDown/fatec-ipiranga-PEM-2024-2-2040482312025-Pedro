#include <stdio.h>

int main() {
        char*tabuleiro[64] = {
            " t ", " c ", " b ", " d ", " r ", " b ", " c ", " t ",
            " p ", " p ", " p ", " p ", " p ", " p ", " p ", " p ",
            " x ", " x ", " x ", " x ", " x ", " x ", " x ", " x ",
            " x ", " x ", " x ", " x ", " x ", " x ", " x ", " x ",
            " x ", " x ", " x ", " x ", " x ", " x ", " x ", " x ",
            " x ", " x ", " x ", " x ", " x ", " x ", " x ", " x ",
            " P ", " P ", " P ", " P ", " P ", " P ", " P ", " P ",
            " T ", " C ", " B ", " D ", " R ", " B ", " C ", " T "
    };
    int linha = 8;
    int i;
    for( i = 0; i < 64; i += 8);
    {
        printf("%d | %-4s%-4s%-4s%-4s%-4s%-4s%-4s%-4s\n", linha, 
            tabuleiro[0 + i], tabuleiro[1 + i], tabuleiro[2 + i], tabuleiro[3 + i], 
            tabuleiro[4 + i], tabuleiro[5 + i], tabuleiro[6 + i], tabuleiro[7 + i]);
    
        linha -= 1;
    }

    printf("   --------------------------------\n");
    printf("     a   b   c   d   e   f   g   h\n");

    return 0;

}