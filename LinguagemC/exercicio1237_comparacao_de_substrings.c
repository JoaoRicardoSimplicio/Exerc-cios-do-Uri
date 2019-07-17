#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char PalavraA[100], PalavraB[100];
    int cont, quant = 0, i, maior = 0, x;
    while (scanf(" %100[^\n] %100[^\n]", PalavraA, PalavraB)!=EOF){
        for (cont=0; cont<strlen(PalavraA); cont++){
                quant = 0;
                x = cont;
                for (i=0; i<strlen(PalavraB); i++){
                    if (PalavraA[x]==PalavraB[i]){
                        quant+=1;
                        x++;
                    }
                    else if (PalavraA[x]!=PalavraB[i]){
                        x = cont;
                        if (quant>maior){
                            maior = quant;
                        }
                        quant = 0;
                    }
                }
            if (quant>maior){
                maior = quant;
            }
        }
        printf("%d\n", maior);
        maior = 0;
    }
return 0;
}


## João Ricardo Simplício Soares ##

