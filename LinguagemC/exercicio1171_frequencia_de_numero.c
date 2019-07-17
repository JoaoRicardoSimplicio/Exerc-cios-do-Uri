#include <stdio.h>
#include <stdlib.h>

int main (){
    int Vezes, cont, num, i, maior=0, aux, apa, pos, ult;
    scanf("%d", &Vezes);
    int vetor[Vezes];
    for (cont=0; cont<Vezes; cont++){
        scanf("%d", &vetor[cont]);
        if (vetor[cont]>maior){
            maior=vetor[cont];
        }
    }
    for (cont=0; cont<Vezes; cont++){
        apa = 0;
        aux = maior;
        for (i=0; i<Vezes; i++){
            if (vetor[i]!=0){
                if (vetor[i]<aux){
                    aux = vetor[i];
                    pos = i;
                }
            }
        }
        if (ult==aux){
            break;
        }
        for (i=0; i<Vezes; i++){
            if (vetor[i]!=0){
                if (vetor[i]==aux){
                    apa+=1;
                    vetor[i]=0;
                }
            }
        }
        printf("%d aparece %d vez(es)\n", aux, apa);
        ult = aux;
    }
return 0;
}

## João Ricardo Simplício Soares ##

