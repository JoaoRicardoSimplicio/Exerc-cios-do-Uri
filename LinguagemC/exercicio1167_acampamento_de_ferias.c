#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int alunos, cont, i, contagem, atual, ind=0, pos, par, impar, quantzero=0, saida;
    while (1){
        scanf("%d", &alunos);
        if (alunos==0){
            break;
        }
        char Nomes[alunos][30];
        int Distribuicao[alunos];
        for (cont=0; cont<alunos; cont++){
            scanf("%s %d", Nomes[cont], &Distribuicao[cont]);
            if (cont==0){
                atual = Distribuicao[cont];
                pos = cont;
            }
        }
        while (ind==0){
            par = 0;
            impar = 0;
            if (atual%2==0){
                par = 1;
            }
            else if (atual%2==1){
                impar = 1;
            }
            while (atual>=1){
                    if (par==1 && impar==0){
                        pos--;
                        if (pos<0){
                            pos = (alunos-1);
                        }
                    }
                    else if (impar==1 && par==0){
                        pos++;
                        if (pos>alunos-1){
                            pos = 0;
                        }
                    }
                    if (Distribuicao[pos]!=0){
                    atual-=1;
                    saida = pos;
                    }
            }
            atual  = Distribuicao[pos];
            Distribuicao[pos] = 0;
            quantzero+=1;
            if (quantzero==alunos){
                ind = 1;
            }
        }
        printf("Vencedor(a): %s\n", Nomes[saida]);
        ind = 0;
        quantzero = 0;
    }
return 0;
}


## João Ricardo Simplício Soares ##