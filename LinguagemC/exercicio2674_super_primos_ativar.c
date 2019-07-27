#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    int cont, i, superprimo = 1, primo = 1, quant = 0;
    double raiz;
    char Num[10];
    long long int Numero;
    while (scanf("%s", Num)!=EOF){
        Numero = atoi(Num);
        if (Numero==1 || Numero==0){
            primo = 0;
        }
        raiz = sqrt(Numero);
        for (cont = 1; cont<=raiz; cont++){
            if (Numero%cont==0){
                quant+=1;
            }
        }
        if (quant>1){
            primo = 0;
        }
        if (primo==1){
            for (cont=0; cont<strlen(Num); cont++){
                if (Num[cont]!='2' && Num[cont]!='3' && Num[cont]!='5' && Num[cont]!='7'){
                    superprimo = 0;
                    break;
                }
            }
        }
        if (primo==0){
            printf ("Nada\n");
        }
        else if (primo==1 && superprimo==0){
            printf ("Primo\n");
        }
        else if (primo==1 && superprimo==1){
            printf ("Super\n");
        }
        superprimo = 1;
        primo = 1;
        quant = 0;
    }
return 0;
}
