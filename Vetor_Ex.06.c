#include <stdio.h>

int main()
{

    int i, j, r, b = 0;
    int A[10];
    
    for (i = 0; i <=9; i++){
        printf("Escreva o valor para o vetor %d\n", i);
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i <= 10; i++){
        for(j = 2; j < A[i]; j++){
            r = A[i] % j;
            if (r == 0){
                b = 1;
            }
        }
        if (b == 0){
            printf("O vetor na posicao %d eh primo\n", i);
        }
        b = 0;
    }
    
    return 0;
}