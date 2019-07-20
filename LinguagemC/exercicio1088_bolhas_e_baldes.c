#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000001

/* Resul = Par : Carlos
   Resul == Impar : Marcelo
*/

int main (){
    int Resul = 0, cont, i, Tamanho, bolha, aux, pos, a = 0, fora = 0;
    while (1){
        scanf ("%d", &Tamanho);
        if (Tamanho==0){
            break;
        }
        int Bolhas[SIZE];
        int Posicoes[SIZE];
        for (cont=0; cont<Tamanho; cont++){
            scanf ("%d", &Bolhas[cont]);
            if (Bolhas[cont]!=cont+1){
                Posicoes[a] = cont;
                a++;
                fora+=1;
            }
        }
        a = 0;
        while (fora>0){
            pos = Posicoes[a];
            bolha = Bolhas[pos];
            while (bolha!=pos+1){
                i = bolha-1;
                if (Bolhas[i]==pos+1){
                    aux = Bolhas[i];
                    Bolhas[i] = bolha;
                    bolha = aux;
                    Resul+=(abs(i-pos))*2;
                    Resul-=1;
                }
                else if (Bolhas[i]!=pos+1){
                    aux = Bolhas[i];
                    Bolhas[i] = bolha;
                    bolha = aux;
                    Resul+=(abs(i-pos))*2;
                    Resul+=1;
                }
            }
            Bolhas[pos] = bolha;
            a++;
            fora-=1;
        }
            if (Resul%2!=0){
                printf ("Marcelo\n");
            }
            else if (Resul%2==0){
                printf ("Carlos\n");
            }
        Resul = 0;
        a = 0;
        fora = 0;
    }
return 0;
}
