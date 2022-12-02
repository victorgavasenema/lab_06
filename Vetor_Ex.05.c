#include <stdio.h>

int main()
{

    int i;
    int A[50];
    
    for (i = 0; i <= 49; i++){
        A[i] = (i+5*i)%(i+1);
        printf("Valor da posicao %d eh: %d\n", i, A[i]);
    }
    
    return 0;
}