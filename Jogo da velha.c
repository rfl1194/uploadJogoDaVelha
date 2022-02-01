#include <stdio.h>
#include <stdbool.h>
int main()
{   char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int l, c, i;
    
    printf("\33[H\33[2J");  // limpa tela
    printf("  M I N I   J O G O   D A   V E L H A\n\n");
    printf("   0   1   2\n");
    printf("0  %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ---+---+---\n");
    printf("1  %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ---+---+---\n");
    printf("2  %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    int cont=0;
    while(true)
    {
    // Jogada do 'X'
    do {
        printf("\n\nJogador X -> digite sua jogada, linha (0-2) e coluna (0-2): ");
        scanf("%d%d", &l, &c);
    } while(l<0 || l>2 || c<0 || c>2|| tabuleiro[l][c]!=' ');
    
    tabuleiro[l][c] = 'X';
    
    printf("\33[H\33[2J");  // limpa tela
    printf("  M I N I   J O G O   D A   V E L H A\n\n");
    printf("   0   1   2\n");
    printf("0  %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ---+---+---\n");
    printf("1  %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ---+---+---\n");
    printf("2  %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    
    // Testar se alguém ganhou ou se houve empate
     if( (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) ||
         
         (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2]) ||
         
         (tabuleiro[1][0]!=' ' && tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) ||
         
         (tabuleiro[2][0]!=' ' && tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2]) ||
         
         (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[1][0] == tabuleiro[2][0]) ||
         
         (tabuleiro[0][1]!=' ' && tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][1]) ||
         
         (tabuleiro[0][2]!=' ' && tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[1][2] == tabuleiro[2][2]) ||
         
         (tabuleiro[2][0]!=' ' && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == tabuleiro[2][0])) 
     {  printf("Você Venceu");
        break;
     }
     if(cont==9)
     {
       printf("Empate");
       break; 
     }
    // Jogada do 'O'
    do {
        printf("\n\nJogador O -> digite sua jogada, linha (0-2) e coluna (0-2): ");
        scanf("%d%d", &l, &c);
    } while(l<0 || l>2 || c<0 || c>2 || tabuleiro[l][c]!=' ');
    
    tabuleiro[l][c] = 'O';
    
    printf("\33[H\33[2J");  // limpa tela
    printf("  M I N I   J O G O   D A   V E L H A\n\n");
    printf("   0   1   2\n");
    printf("0  %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ---+---+---\n");
    printf("1  %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ---+---+---\n");
    printf("2  %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
     
    // Testar se alguém ganhou ou se houve empate
   if( (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) ||
         
         (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[0][1] && tabuleiro[0][1] == tabuleiro[0][2]) ||
         
         (tabuleiro[1][0]!=' ' && tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) ||
         
         (tabuleiro[2][0]!=' ' && tabuleiro[2][0] == tabuleiro[2][1] && tabuleiro[2][1] == tabuleiro[2][2]) ||
         
         (tabuleiro[0][0]!=' ' && tabuleiro[0][0] == tabuleiro[1][0] && tabuleiro[1][0] == tabuleiro[2][0]) ||
         
         (tabuleiro[0][1]!=' ' && tabuleiro[0][1] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][1]) ||
         
         (tabuleiro[0][2]!=' ' && tabuleiro[0][2] == tabuleiro[1][2] && tabuleiro[1][2] == tabuleiro[2][2]) ||
         
         (tabuleiro[2][0]!=' ' && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == tabuleiro[2][0])) 
     {  printf("Você Venceu");
        break;
     }   
    
     if(cont==9)
     {
       printf("Empate");
       break; 
     }

    }
    
    
  

    return 0;
}
