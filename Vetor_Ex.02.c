#include <stdio.h>

int main()
{

    int x, y, i, n, SOMA;
    int A[8];
    
    for (i = 0; i <= 7; i++){
        printf ("Escreva o valor %d: \n", i);
        scanf ("%d", &A[i]);
    }
    
    printf("Digite 2 valores para a posicao do vetor (de 0 a 7)");
    scanf("%d%d",&x, &y);
    
    SOMA = A[x] + A[y];
    printf("A soma eh: %d\n", SOMA);
    
    return 0;
}