#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int alice, beatriz, cont, i, contAlice=0, contBeatriz=0;
    while (1){
        scanf ("%d %d", &alice, &beatriz);
        if (alice==0 && beatriz==0){
            break;
        }
        else {
            int Alice[alice], Beatriz[beatriz], var=0, ind=0;
            for (cont=0; cont<alice; cont++){
                scanf ("%d", &Alice[cont]);
            }
            for (i=0; i<beatriz; i++){
                scanf ("%d", &Beatriz[i]);
            }
            for (cont=0; cont<alice; cont++){
                for (i=0; i<beatriz; i++){
                    if (Alice[cont]!=Beatriz[i] && Alice[cont]!=var){
                        ind=1;
                    }
                    else if (Alice[cont]==Beatriz[i] || Alice[cont]==var){
                        ind=0;
                        break;
                    }
                }
                var=Alice[cont];
                if (ind==1){
                    contAlice+=1;
                    ind=0;
                }
            }
            ind=0;
            var=0;
            for (cont=0; cont<beatriz; cont++){
                for (i=0; i<alice; i++){
                  if (Beatriz[cont]!=Alice[i] && Beatriz[cont]!=var){
                    ind=1;
                  }
                  else if (Beatriz[cont]==Alice[i] || Beatriz[cont]==var){
                    ind=0;
                    break;
                    }
                }
                var=Beatriz[cont];
                if (ind==1){
                    contBeatriz+=1;
                    ind=0;
                }
            }
           if (contAlice<=contBeatriz){
            printf ("%d\n", contAlice);
           }
           else if (contAlice>contBeatriz){
            printf ("%d\n", contBeatriz);
           }
        }
        contAlice=0; contBeatriz=0;
    }
return 0;
}


## João Ricardo Simplício Soares ##