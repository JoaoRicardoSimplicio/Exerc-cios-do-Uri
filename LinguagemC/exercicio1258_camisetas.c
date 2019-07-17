#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int cont, i, tam, letra, Alunos, x=0, y=0, ind=0, a=0, vez=0;
    while (1){
        scanf("%d", &Alunos);
        if (Alunos==0){
            break;
        }
        if (Alunos!=0 && vez!=0){
            printf("\n");
        }
        char nome[50], cor[20], tam[5];
        char Bnome[Alunos][50], Bcor[Alunos][20], Btam[Alunos][5];
        char Vnome[Alunos][50], Vcor[Alunos][20], Vtam[Alunos][5];
        char Nomeaux[50], coraux[20], tamaux[5];
        for (cont=0; cont<Alunos; cont++){
            scanf(" %[^\n]", nome);
            scanf("%s %s", cor, tam);
            if (cor[0]=='b'){
                for (i=0; i<x; i++){
                    a = 0;
                    ind = 0;
                    if (tam[0]==Btam[i][0]){
                        if (nome[0]<Bnome[i][0]){
                            strcpy(Nomeaux, Bnome[i]);
                            strcpy(coraux, Bcor[i]);
                            strcpy(tamaux, Btam[i]);
                            strcpy(Bnome[i], nome);
                            strcpy(Bcor[i], cor);
                            strcpy(Btam[i], tam);
                            strcpy(nome, Nomeaux);
                            strcpy(cor, coraux);
                            strcpy(tam, tamaux);
                        }
                        else if (nome[0]==Bnome[i][0]){
                            while (ind==0){
                               if (nome[a]<Bnome[i][a]){
                                    strcpy(Nomeaux, Bnome[i]);
                                    strcpy(coraux, Bcor[i]);
                                    strcpy(tamaux, Btam[i]);
                                    strcpy(Bnome[i], nome);
                                    strcpy(Bcor[i], cor);
                                    strcpy(Btam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                                    break;
                                }
                                else if (nome[a]>Bnome[i][a]){
                                    ind = 1;
                                }
                                a++;
                            }
                        }
                    }
                    else if (tam[0]=='P' && Btam[i][0]!='P'){
                                    strcpy(Nomeaux, Bnome[i]);
                                    strcpy(coraux, Bcor[i]);
                                    strcpy(tamaux, Btam[i]);
                                    strcpy(Bnome[i], nome);
                                    strcpy(Bcor[i], cor);
                                    strcpy(Btam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                    }
                    else if (tam[0]=='M' && Btam[i][0]=='G'){
                                    strcpy(Nomeaux, Bnome[i]);
                                    strcpy(coraux, Bcor[i]);
                                    strcpy(tamaux, Btam[i]);
                                    strcpy(Bnome[i], nome);
                                    strcpy(Bcor[i], cor);
                                    strcpy(Btam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                    }
                }
                strcpy(Bnome[x], nome);
                strcpy(Bcor[x], cor);
                strcpy(Btam[x], tam);
                x++;
            }
        else if (cor[0]=='v'){
            for (i=0; i<y; i++){
                a = 0;
                ind = 0;
                if (tam[0]==Vtam[i][0]){
                    if (nome[a]<Vnome[i][a]){
                            strcpy(Nomeaux, Vnome[i]);
                            strcpy(coraux, Vcor[i]);
                            strcpy(tamaux, Vtam[i]);
                            strcpy(Vnome[i], nome);
                            strcpy(Vcor[i], cor);
                            strcpy(Vtam[i], tam);
                            strcpy(nome, Nomeaux);
                            strcpy(cor, coraux);
                            strcpy(tam, tamaux);
                        }
                        else if (nome[a]==Vnome[i][a]){
                            while (ind==0){
                               if (nome[a]<Vnome[i][a]){
                                    strcpy(Nomeaux, Vnome[i]);
                                    strcpy(coraux, Vcor[i]);
                                    strcpy(tamaux, Vtam[i]);
                                    strcpy(Vnome[i], nome);
                                    strcpy(Vcor[i], cor);
                                    strcpy(Vtam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                                    break;
                                }
                                else if (nome[a]>Vnome[i][a]){
                                    ind = 1;
                                }
                                a++;
                            }
                        }
                    }
                    else if (tam[0]=='P' && Vtam[i][0]!='P'){
                                    strcpy(Nomeaux, Vnome[i]);
                                    strcpy(coraux, Vcor[i]);
                                    strcpy(tamaux, Vtam[i]);
                                    strcpy(Vnome[i], nome);
                                    strcpy(Vcor[i], cor);
                                    strcpy(Vtam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                    }
                    else if (tam[0]=='M' && Vtam[i][0]=='G'){
                                    strcpy(Nomeaux, Vnome[i]);
                                    strcpy(coraux, Vcor[i]);
                                    strcpy(tamaux, Vtam[i]);
                                    strcpy(Vnome[i], nome);
                                    strcpy(Vcor[i], cor);
                                    strcpy(Vtam[i], tam);
                                    strcpy(nome, Nomeaux);
                                    strcpy(cor, coraux);
                                    strcpy(tam, tamaux);
                    }
            }
            strcpy(Vnome[y], nome);
            strcpy(Vcor[y], cor);
            strcpy(Vtam[y], tam);
            y++;
        }
    }
        for (cont=0; cont<x; cont++){
            printf("%s %s %s\n", Bcor[cont], Btam[cont], Bnome[cont]);
        }
        for (cont=0; cont<y; cont++){
            printf("%s %s %s\n", Vcor[cont], Vtam[cont], Vnome[cont]);
        }
        vez = 1;
        x = 0;
        y = 0;
        a = 0;
    }
return 0;
}

## João Ricardo Simplício Soares ##

