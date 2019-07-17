#include <stdio.h>
#include <stdlib.h>


typedef struct Jog {
    int id;
    int pos;
    int joga;
}Jog;

int main (){
    int cont, i = 0, Players, Trilha, Arm1, Arm2, Arm3, atual = 0, dado1, dado2, Winner, rodadas;
    while(1){
        scanf("%d %d", &Players, &Trilha);
        if (Players==0 && Trilha==0){
            break;
        }
        scanf("%d %d %d", &Arm1, &Arm2, &Arm3);
        Jog Jogadores[Players];
        for (cont=0; cont<Players; cont++){
            Jogadores[cont].id = cont+1;
            Jogadores[cont].pos = 0;
            Jogadores[cont].joga = 0;
        }
        scanf("%d", &rodadas);
        while(rodadas>=1){
            scanf("%d %d", &dado1, &dado2);
            dado1+=dado2;
            while (Jogadores[atual].joga==1){
                Jogadores[atual].joga = 0;
                atual+=1;
                if (atual==Players){
                    atual = 0;
                }
            }
            Jogadores[atual].pos+=dado1;
            if (Jogadores[atual].pos>Trilha){
                if (i==0){
                    Winner = Jogadores[atual].id;
                    i = 1;
                }
            }
            else if (Jogadores[atual].pos<=Trilha){
                if (Jogadores[atual].pos==Arm1 || Jogadores[atual].pos==Arm2 || Jogadores[atual].pos==Arm3){
                    Jogadores[atual].joga = 1;
                }
            }
            atual+=1;
            if (atual==Players){
                atual = 0;
            }
            rodadas-=1;
        }
        printf("%d\n", Winner);
        atual = 0;
        i = 0;
    }
return 0;
}


## João Ricardo Simplício Soares ##