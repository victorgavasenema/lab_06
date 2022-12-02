#include <stdio.h>

int main()
{
    int n[4][4];
    int i, j, k = 0;
    
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
        printf("Escreva um numero (Linha %d Coluna %d):", i, j);
        scanf("%d", &n[i][j]);
        }
    }
    
    printf("Posicao dos valores maiores que 10:\n");
    for(i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (n[i][j] > 10){
                printf("-Linha %d Coluna%d\n", i, j);
                k ++;
            }
        }
    }
    printf("Quantidade de valores maior que 10: %d\n", k);

    return 0;
}