#include <stdio.h>
#include <stdlib.h>

int main (){
    int cont, i, testes, primo, quant;
    scanf("%d", &testes);
    while (testes>=1){
        scanf("%d %d", &primo, &quant);
        int vetor[quant];
        for (cont=0; cont<quant; cont++){
            scanf("%d", &vetor[cont]);
        }
        for (cont=0; cont<primo; cont++){
            printf("%d -> ", cont);
            for (i=0; i<quant; i++){
                if (vetor[i]%primo==cont){
                    printf("%d -> ", vetor[i]);
                }
            }
            printf("\\");printf("\n");
        }
        testes-=1;
        if (testes>0){
            printf("\n");
        }
    }
return 0;
}



## João Ricardo Simplício Soares ##