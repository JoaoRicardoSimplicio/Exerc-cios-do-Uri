#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int cont, i, tam, tamanho, vezes, quant, x=0, y=0, pos, maior;
    char texto[50], ind;
    char palavras[50][50], saida[50][50];
    scanf("%d", &vezes);
    while (vezes>=1){
        int vetor[50];
        while (1){
            scanf ("%s", palavras[x]);
            vetor[x] = 1;
            ind = getchar();
            if (ind=='\n'){
                break;
            }
            else {
                x++;
            }
        }
        while (y<=x){
            maior = 0;
            for (cont=0; cont<=x; cont++){
                if (vetor[cont]!=0){
                    tam = strlen(palavras[cont]);
                    if (tam>maior){
                        maior = tam;
                        pos = cont;
                    }
                }
            }
            if (y<x){
                printf ("%s ", palavras[pos]);
            }
            else if (y==x){
                printf ("%s\n", palavras[pos]);
            }
            y++;
            vetor[pos]=0;
        }
        x=0, y=0;
        vezes-=1;
    }
return 0;
}




## João Ricardo Simplício Soares ##