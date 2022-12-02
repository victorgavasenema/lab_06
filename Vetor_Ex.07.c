#include <stdio.h>

int main()
{
    int n[6];
    int i, j = 0, soma = 0;
    
    for (i = 0; i < 6; i++){
        printf("Escreva um numero (posicao %d):", i);
        scanf("%d", &n[i]);
    }
    
    for (i = 0; i < 6; i++){
       if (n[i] % 2 == 0){
            printf("O numero na %d (posicao[%d]) eh par.\n", n[i], i);
            soma = soma + n[i];
        }
    }
    printf("Soma dos pares: %d\n", soma);

    for (i = 0; i < 6; i++){
            if (n[i] % 2 != 0){
                printf("O numero na %d (posicao[%d]) eh impar.\n", n[i], i);
                j = j + 1;
            }
        }
    printf("Foram escritos %d numeros impares.\n", j);

    return 0;
}