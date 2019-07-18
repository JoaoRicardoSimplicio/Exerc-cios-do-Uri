#include <stdio.h>
#include <stdlib.h>

int main () {
    int tamanho, vezes, cont, i, placa, tam, quant=0, x, ind=0, posicao, total=0, ot=1;
    char op[2];
    while (scanf ("%d %d", &tamanho, &vezes)!=EOF){
        int esta[tamanho];
        int placas[vezes];
        int ts[vezes];
        int pos[vezes];
        for (cont=0; cont<tamanho; cont++){
            esta[cont]=0;
        }
        for (cont=0; cont<vezes; cont++){
            scanf ("%s %d", op, &placa);
            if (op[0]=='C'){
                scanf ("%d", &tam);
                for (i=0; i<=cont; i++){
                    if (placa==placas[i]){
                        ot=0;
                        break;
                    }
                }
                if (ot==1){
                for (i=0; i<tamanho; i++){
                    if (esta[i]==0){
                        for (x=i; x<tamanho; x++){
                            if (esta[x]==0){
                                quant++;
                            }
                            else if (esta[x]!=0){
                                ind=0;
                                quant=0;
                                break;
                            }
                            if (quant==tam){
                                ind=1;
                                break;
                            }
                        }
                        if (ind==1){
                        posicao=i;
                        quant=0;
                        break;
                        }
                    }
                    quant=0;
                }
                if (ind==1){
                    placas[cont]=placa;
                    pos[cont]=posicao;
                    ts[cont]=tam;
                    for (i=0; i<tamanho; i++){
                        if (i==posicao){
                            for (x=i; x<tamanho; x++){
                                esta[x]=1;
                                quant++;
                                if (quant==tam){
                                    break;
                                }
                            }
                        }
                    }
                    total+=10;
                }
                else if (ind==0){
                    placas[cont]=0;
                    pos[cont]=-1;
                    ts[cont]=0;
                }
                quant=0;
                }
            }
            else if (op[0]=='S'){
                    placas[cont]=0;
                    pos[cont]=-1;
                    ts[cont]=0;
                    for (i=0; i<=cont; i++){
                            if (placa==placas[i]){
                                posicao=pos[i];
                                quant=ts[i];
                                placas[i]=0;
                                break;
                            }
                    }
                    for (i=0; i<tamanho; i++){
                        if (i==posicao){
                            for (x=i; x<tamanho; x++){
                                esta[x]=0;
                                quant--;
                                if (quant==0){
                                    break;
                                }
                            }
                        }
                    }
                }
                quant=0;
                ind=0;
            }
            printf ("%d\n", total);
            total=0;
            quant=0;
            ind=0;
            ot=1;
        }
return 0;
}



## João Ricardo Simplício Soares ##