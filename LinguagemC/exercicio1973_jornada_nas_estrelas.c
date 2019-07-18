#include <stdio.h>
#include <stdlib.h>


int main (){
    long long int cont, sitios, total=0, percorreu=0, op=0;
    scanf("%lld", &sitios);
    long long int vetor[sitios];
    for (cont=0; cont<sitios; cont++){
        scanf("%lld", &vetor[cont]);
    }
    while (op<sitios){
        if (vetor[op]!=0){
            if (vetor[op]%2==1){
                vetor[op]-=1;
                op++;
            }
            else if (vetor[op]%2==0){
                vetor[op]-=1;
                op--;

            }
        }
        if (op>percorreu){
            percorreu=op;
        }
        else if (vetor[op]==0){
            op--;
        }
        if (op<0){
            percorreu++;
            break;
        }
    }
    if (op==0){
        op=1;
    }
    for (cont=0; cont<sitios; cont++){
        total+=vetor[cont];
    }
    printf("%lld %lld\n", percorreu, total);
    return 0;
}



## João Ricardo Simplício Soares ##