#include <stdio.h>

int main()
{
    int Soma;
    int A[6];
    A[0]=1;
    A[1]=0;
    A[2]=5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;
    
    Soma = A[0] + A[1] + A[5];
    printf ("%d\n", Soma);
    
    A[4]=100;
    
    int i;
    for (i = 0; i <= 5; i++){
        printf ("%d\n", A[i]);
    }
    
    return 0;
}