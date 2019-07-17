#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int cont, i, teste, num, x, a=0;
    scanf("%d", &teste);
    unsigned char texto[100000], comp[100000];
    while (teste>=1){
        scanf("%s", texto);
        scanf("%d", &num);
        for (x=0; x<num; x++){
                scanf("%s", comp);
                a = 0;
                for (cont=0; cont<strlen(texto); cont++){
                    if (texto[cont]==comp[a]){
                            a++;
                            if (a==strlen(comp)){
                                break;
                            }
                    }
                }
                if (a==strlen(comp)){
                    printf("Yes\n");
                }
                else if (a<strlen(comp)){
                    printf("No\n");
                }
        }
    teste-=1;
    }
return 0;
}

## João Ricardo Simplício Soares ##