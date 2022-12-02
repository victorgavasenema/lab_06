#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    int n[5][5];
    int i, j;
    srand(time(NULL));

    printf("----- BINGO -----\n");
    for(i = 0; i < 5; i++){
        printf("|");
        for(j = 0; j < 5; j++){
            n[i][j] = rand() % 100;
            printf("%d ", n[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("-----------------\n");
    return 0;
}