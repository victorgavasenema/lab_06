#include <stdio.h>

int main()
{
    int n[4][4];
    int i, j;
    int k, l, m;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Escreva no valor da posicao [%d][%d]:", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    
    m = n[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if (n[i][j] > m){
            m = n[i][j];
            k = i;
            l = j;
            }
        }
    }
    printf("A posicao do maior valor esta em [%d][%d]\n", k, l);
    return 0;
}