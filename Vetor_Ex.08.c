#include <stdio.h>

int main()
{
    int n[10];
    int i, j;
    
    for (i = 0; i < 10; i++){
        printf("Escreva um numero (posicao %d):", i);
        scanf("%d", &n[i]);
        if(i != 0){
            for(j = 0; j < i; j++){
                if (n[j] == n[i]){
                    printf("Valor conflitante entre as posicoes [%d] e [%d].\n", i, j);
                    printf("Escreva um numero (posicao %d):", i);
                    if (n[j] == n[i]){
                        j--;
                    }
                    scanf("%d", &n[i]);
                }
            }
        }
    }
    
    return 0;
}