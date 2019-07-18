#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vez=1, cont, i, marmore, consultas, aux, ind=0, pos, num;
    while (1){
        scanf ("%d %d", &marmore, &consultas);
        if (marmore==0 && consultas==0){
            break;
        }
        int vetor[marmore];
        for (cont=0; cont<marmore; cont++){
            scanf ("%d", &vetor[cont]);
            for (i=0; i<=cont; i++){
                if (vetor[cont]<vetor[i]){
                    aux=vetor[i];
                    vetor[i]=vetor[cont];
                    vetor[cont]=aux;
                }
            }
        }
        printf ("CASE# %d:\n", vez);
        while (consultas>=1){
            scanf ("%d", &num);
            for (cont=0; cont<marmore; cont++){
                if (num==vetor[cont]){
                    pos=cont;
                    ind=1;
                    break;
                }
            }
            if (ind==0){
                printf("%d not found\n", num);
            }
            else if (ind==1){
                printf("%d found at %d\n", num, pos+1);
            }
            ind=0;
            consultas--;
        }
        vez++;
    }
}



## João Ricardo Simplício Soares ##