#include <stdio.h>
#include <stdlib.h>

int main (){
    int cont, i, quant = 0, teste, impar = 0, tam, num, imp = 0, aux;
    scanf("%d", &teste);
    while (teste>=1){
        scanf("%d", &tam);
        int Vetor[tam];
        for (cont=0; cont<tam; cont++){
            scanf("%d", &num);
            if (num%2!=0){
                imp+=1;
            }
            for (i=0; i<cont; i++){
                if (num>Vetor[i]){
                    aux = Vetor[i];
                    Vetor[i] = num;
                    num = aux;
                }
            }
            Vetor[cont] = num;
        }
        if (imp==0){
            printf("\n");
        }
        else if (imp!=0){
            while (imp>=1){
                for (cont=0; cont<tam; cont++){
                    if (Vetor[cont]%2==1){
                        if (imp>1){
                            printf("%d ", Vetor[cont]);
                            Vetor[cont] = 0;
                        }
                        else if (imp==1){
                            printf("%d\n", Vetor[cont]);
                            Vetor[cont] = 0;
                        }
                        imp-=1;
                        break;
                    }
                }
                for (cont=tam-1; cont>=0; cont--){
                    if (Vetor[cont]%2!=0){
                        if (imp>1){
                            printf("%d ", Vetor[cont]);
                            Vetor[cont] = 0;
                        }
                        else if (imp==1){
                            printf("%d\n", Vetor[cont]);
                            Vetor[cont] = 0;
                        }
                        imp-=1;
                        break;
                    }
                }
            }
        }
        imp = 0;
        teste-=1;
    }
return 0;
}


## João Ricardo Simplício Soares ##