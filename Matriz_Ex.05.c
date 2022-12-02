#include <stdio.h>

int main()
{
    int n[10][10];
    int i, j;
    

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                n[i][j] = 2*i +7*j -2;
            }
            if(i == j){
                n[i][j] = 3*(i*i) - 1;
            }
            if(i > j){
                n[i][j] = (4*(i*i*i) - 5*(j*j)) + 1;
            }
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}