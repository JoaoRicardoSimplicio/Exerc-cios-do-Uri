#include <stdio.h>
#include <stdlib.h>

int main () {
    int quant=0, cont;
    char text[1000];
    while (scanf ("%s", text)!=EOF){
    for (cont=0; cont<strlen(text); cont++){
        if (text[cont]=='('){
                quant+=1;
            }
        else if (text[cont]==')'){
                quant-=1;
        }
        if (quant==-1){
            break;
        }
    }
    if (quant==0){
        printf ("correct\n");
    }
    else if (quant!=0){
        printf ("incorrect\n");
    }
    quant=0;
}
return 0;
}

## João Ricardo Simplício Soares ##