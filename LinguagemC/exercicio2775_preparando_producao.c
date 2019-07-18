#include <stdio.h>
#include <stdlib.h>


int main(){
    int pac, cont, i, ind=0, fez;
    long long total=0, aux;
    while (scanf ("%d", &pac)!=EOF){
        long long int pacotes[pac];
        int tempo[pac];
        for (cont=0; cont<pac; cont++){
            scanf ("%lld", &pacotes[cont]);
        }
        for (cont=0; cont<pac; cont++){
            scanf("%d", &tempo[cont]);
        }
        while (ind==0){
        fez = 1;
            for (cont=0; cont<pac; cont++){
                if (cont<pac-1){
                    i = cont+1;
                }
                else {
                    i = cont;
                }
                if (pacotes[cont]>pacotes[i]){
                    aux = pacotes[cont];
                    pacotes[cont]=pacotes[i];
                    pacotes[i]=aux;
                    aux = tempo[cont];
                    tempo[cont] = tempo[i];
                    tempo[i] = aux;
                    total+=tempo[cont]+tempo[i];
                    fez = 0;
                }
                else if (pacotes[cont]<pacotes[cont+1]){
                    if (fez!=0){
                        fez = 1;
                    }
                }
            }
            if (fez==1){
                ind=1;
            }
        }
        printf ("%lld\n", total);
        total = 0;
        ind = 0;
    }
return 0;
}




## João Ricardo Simplício Soares ##