#include <stdio.h>

int main()
{
    int A[2][2];
    int i, j;
    int B[2][2];
    int k, l;
    int op;
    int x, s;
    
    printf("Matriz 1:\n");
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    printf("Escreava o valor: Linha (%d) Coluna (%d): ", i, j);
                    scanf("%d", &A[i][j]);
                }
            }
            
            printf("Matriz 2:\n");
            for(k = 0; k < 2; k++){
                for(l = 0; l < 2; l++){
                    printf("Escreava o valor: Linha (%d) Coluna (%d): ", k, l);
                    scanf("%d", &B[k][l]);
                }
            }
    
    do{
        printf("---Menu de Operacoes ---\n");
        printf("(1)Somar duas matrizes\n");
        printf("(2)Subtrair a primeira matriz da segunda\n");
        printf("(3)Adicionar uma constante as duas matrizes\n");
        printf("(4)Imprimir as matrizes\n");
        printf("(5)Sair\n");
        printf("Escreva o numero da operacao desejada: ");
        scanf("%d", &op);
        
        switch (op){
            case (1):
            printf("-Matriz Soma-\n");
            for(i = 0; i < 2; i++){
                k = i;
                for(j = 0; j < 2; j++){
                    l = j;
                    s = A[i][j] + B[k][l];
                    printf("%d ",s);
                }
                printf("\n");
            }
            break;
            
            //Subtrair a primeira matriz da segunda
            case (2):
            printf("-Matriz Subtracao-\n");
            for(i = 0; i < 2; i++){
                k = i;
                for(j = 0; j < 2; j++){
                    l = j;
                    s = A[i][j] - B[k][l];
                    printf("%d ",s);
                }
                printf("\n");
            }
            break;
            
            //Adicionar uma constante as duas matrizes
            case (3):
            printf("Escreva um numero para multiplicar as matrizes: ");
            scanf("%d", &x);
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    A[i][j] = (A[i][j])*x;
                }
            }
            for(k = 0; k < 2; k++){
                    for(l = 0; l < 2; l++){
                        B[k][l] = (B[k][l])*x;
                }
            }
            break;
            
            //Imprimir as matrizes
            case (4):
            printf("---Matriz 1---\n");
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("%d ", A[i][j]);
                    }
                    printf("\n");
                }
            printf("--------------\n");
            printf("---Matriz 2---\n");
            for(k = 0; k < 2; k++){
                for(l = 0; l < 2; l++){
                    printf("%d ", B[k][l]);
                }
                printf("\n");
            }
            printf("--------------\n");
            break;
        }
        
    }while(op != 5);
    return 0;
}