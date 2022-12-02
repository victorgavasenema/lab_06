#include <stdio.h>

int main()
{
    int n[5][5];
    int i, j;
    int x, bolean = 0;
    
    printf("Escreva valor para ser encontrado na matriz 5 x 5: ");
    scanf("%d", &x);
    
    for(i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Escreva um numero (Linha %d Coluna %d):", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    
    for(i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (x == n[i][j]){
                printf("-O valor x eh encontrado em: Linha %d Coluna %d\n", i, j);
                bolean = 1;
            }
        }
    }
    if (bolean == 0){
    printf("-O valor x nao foi encontrado na matriz\n");
    }
    
    
    return 0;
}