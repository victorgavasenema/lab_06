#include <stdio.h>

int main()
{
    int n[5];
    int i;
    int m=0;
    int j;
    

    for(i = 0; i < 5; i++){
        printf("Escreva um numero para o vetor[%d]:", i);
        scanf("%d", &n[i]);
    }
    
    m = n[0];
    j = i;
    for(i = 0; i < 5; i++){
        if(n[i]> m){
            m = n[i];
            j = i;
        }
    }
    printf("O maior valor se encontra na posicao %d\n", j);
    
    i = 0;
    m = n[0];
    j = i;
    for(i = 0; i < 5; i++){
        if(n[i]< m){
            m = n[i];
            j = i;
        }
    }
    printf("O menor valor se encontra na posicao %d\n", j);
    
    return 0;
}