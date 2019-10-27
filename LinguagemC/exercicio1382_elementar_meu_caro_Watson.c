#include <stdio.h>
#include <stdlib.h>

int main (){
    int cont, i, instancias, auxnum, tamanho, trocas = 0, num, posatual;
    scanf("%d", &instancias);
    while (instancias >= 1){
        scanf("%d", &tamanho);
        int Genes[tamanho];
        int Original[tamanho];
        for (cont = 0; cont < tamanho; cont++){
            scanf("%d", &Original[cont]);
        }
        if (tamanho > 1){
            for (cont = 0; cont < tamanho; cont++){
                while(Original[cont] != cont+1){
                    posatual = Original[cont]-1;
                    auxnum = Original[posatual];
                    if (auxnum == Original[cont]){
                        break;
                    }
                    Original[posatual] = Original[cont];
                    Original[cont] = auxnum;
                    trocas+=1;
                }
            }
        }
        printf("%d\n", trocas);
        instancias-=1;
        trocas = 0;
    }
return 0;
}
