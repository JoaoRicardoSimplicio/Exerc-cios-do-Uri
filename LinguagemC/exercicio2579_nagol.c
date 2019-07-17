#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    long long int linhas, colunas, px, py, x=0, y=0;
    int cont, i, ind=0, mao = 1;
    scanf("%lld %lld %lld %lld", &linhas, &colunas, &px, &py);
    if ((linhas%2==0 || linhas%2==1) && colunas%2==0){
        if ((px%2==0 || px%2==1) && py%2==0){
            mao = 1;
        }
        else if ((px%2==0 || px%2==1) && py%2==1){
            mao = 2;
        }
    }
    else if ((linhas%2==0 || linhas%2==1) && colunas%2==1){
        if (px%2==0 && py%2==0){
            mao = 1;
        }
        else if (px%2==0 && py%2==1){
            mao = 2;
        }
        else if (px%2==1 && py%2==0){
            mao = 2;
        }
        else if (px%2==1 && py%2==1){
            mao = 1;
        }
    }
    if (mao==1){
        printf("Direita\n");
    }
    else if (mao==2){
        printf("Esquerda\n");
    }
return 0;
}


## João Ricardo Simplício Soares ##