#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    int teste, cont, div = 0;
    long long int Numero, raiz;
    scanf ("%d", &teste);
    while (teste>=1){
        char Num[10];
        scanf ("%s", Num);
        Numero = atoi(Num);
        raiz = sqrt(Numero);
        for (cont=1; cont<=raiz; cont++){
            if (Numero%cont==0){
                div+=1;
            }
        }
        if (div>=2){
            printf ("Not Prime\n");
        }
        else if (div<2){
            printf ("Prime\n");
        }
        teste-=1;
        div = 0;
    }
}
