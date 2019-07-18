#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Renas{
    char nome[100];
    int peso;
    int idade;
    double altura;
}Renas;

int main (){
    int cont, i, teste, total_renas, renas_nece, a = 0, vez = 1;
    scanf("%d", &teste);
    while (vez<=teste){
        scanf("%d %d", &total_renas, &renas_nece);
        Renas Ren[total_renas];
        char nome[100], nomeaux[100];
        int pes, auxpes;
        int id, auxid;
        double alt, auxalt;
        for (cont=0; cont<total_renas; cont++){
            scanf("%s %d %d %lf", nome, &pes, &id, &alt);
            for (i=0; i<cont; i++){
                a = 0;
                if (pes>Ren[i].peso){
                    strcpy(nomeaux, Ren[i].nome);
                    strcpy(Ren[i].nome, nome);
                    strcpy(nome, nomeaux);
                    auxpes = Ren[i].peso;
                    Ren[i].peso = pes;
                    pes = auxpes;
                    auxid = Ren[i].idade;
                    Ren[i].idade = id;
                    id = auxid;
                    auxalt = Ren[i].altura;
                    Ren[i].altura = alt;
                    alt = auxalt;
                }
                else if (pes==Ren[i].peso){
                    if (id<Ren[i].idade){
                           strcpy(nomeaux, Ren[i].nome);
                           strcpy(Ren[i].nome, nome);
                           strcpy(nome, nomeaux);
                           auxpes = Ren[i].peso;
                           Ren[i].peso = pes;
                           pes = auxpes;
                           auxid = Ren[i].idade;
                           Ren[i].idade = id;
                           id = auxid;
                           auxalt = Ren[i].altura;
                           Ren[i].altura = alt;
                           alt = auxalt;
                    }
                    else if (id==Ren[i].idade){
                        if (alt<Ren[i].altura){
                                strcpy(nomeaux, Ren[i].nome);
                                strcpy(Ren[i].nome, nome);
                                strcpy(nome, nomeaux);
                                auxpes = Ren[i].peso;
                                Ren[i].peso = pes;
                                pes = auxpes;
                                auxid = Ren[i].idade;
                                Ren[i].idade = id;
                                id = auxid;
                                auxalt = Ren[i].altura;
                                Ren[i].altura = alt;
                                alt = auxalt;
                        }
                        else if (alt==Ren[i].altura){
                            if (nome[a]<Ren[i].nome[a]){
                                    strcpy(nomeaux, Ren[i].nome);
                                    strcpy(Ren[i].nome, nome);
                                    strcpy(nome, nomeaux);
                                    auxpes = Ren[i].peso;
                                    Ren[i].peso = pes;
                                    pes = auxpes;
                                    auxid = Ren[i].idade;
                                    Ren[i].idade = id;
                                    id = auxid;
                                    auxalt = Ren[i].altura;
                                    Ren[i].altura = alt;
                                    alt = auxalt;
                            }
                            else if (nome[a]==Ren[i].nome[a]){
                                while (1){
                                    if (nome[a]<Ren[i].nome[a]){
                                            strcpy(nomeaux, Ren[i].nome);
                                            strcpy(Ren[i].nome, nome);
                                            strcpy(nome, nomeaux);
                                            auxpes = Ren[i].peso;
                                            Ren[i].peso = pes;
                                            pes = auxpes;
                                            auxid = Ren[i].idade;
                                            Ren[i].idade = id;
                                            id = auxid;
                                            auxalt = Ren[i].altura;
                                            Ren[i].altura = alt;
                                            alt = auxalt;
                                            break;
                                    }
                                    else if (nome[a]>Ren[i].nome[a]){
                                        break;
                                    }
                                    else {
                                        a++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            strcpy(Ren[cont].nome, nome);
            Ren[cont].idade = id;
            Ren[cont].peso = pes;
            Ren[cont].altura = alt;
        }
        printf("CENARIO {%d}\n", vez);
        for (cont=0; cont<renas_nece; cont++){
            printf("%d - %s\n", cont+1, Ren[cont].nome);
        }
        vez+=1;
        a = 0;
    }
return 0;
}



## João Ricardo Simplício Soares ##