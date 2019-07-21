#include <stdio.h>
#include <stdlib.h>

int main (){
    int Competidores, Qtdminima, cont, i = 0, nota, aux, atual, Total = 0, maior;
    scanf ("%d", &Competidores);
    scanf ("%d", &Qtdminima);
    int Notas[Competidores];
    for (cont=0; cont<Competidores; cont++){
        scanf ("%d", &nota);
        for (i=0; i<cont; i++){
            if (nota>=Notas[i]){
                aux = Notas[i];
                Notas[i] = nota;
                nota = aux;
            }
        }
        Notas[cont] = nota;
    }
    for (cont=0; cont<Competidores; cont++){
        if (Total<Qtdminima){
            Total+=1;
            atual = Notas[cont];
        }
        else if (Total>=Qtdminima){
            if (Notas[cont]==atual){
                Total+=1;
            }
            else if (Notas[cont]<atual){
                break;
            }
        }
    }
    printf ("%d\n", Total);
return 0;
}

