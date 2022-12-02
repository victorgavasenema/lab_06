#include <stdio.h>

int main()
{

    int x, y, i, n, SOMA;
    int A[6];
    
    for (i = 0; i <= 5; i++){
        printf ("Escreva o valor %d: \n", i);
        scanf ("%d", &A[i]);
    }
    
    for (i = 5; i >= 0; --i){
        printf ("%d\n", A[i]);
    }
    
    
    return 0;
}