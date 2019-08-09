#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <windows.h>
#include "struct.h"

void CadastraBanda(int numb, BANDA *banda){
  for(int i=0; i<numb; i++){
    fflush(stdin);
    printf("Nome da banda:");
    fgets(banda->nome,255,stdin);
    printf("Tipo da banda:");
    fgets(banda->tipo,255,stdin);
    printf("Numero de Integrantes:");
    scanf("%d", &banda->integ);
    printf("Rank:");
    scanf("%d", &banda->rank);
    banda++;
    system("cls");
  }
}
void MostraTodasBandas(int numb, BANDA *banda){
  system("cls");
  for(int i=0; i<numb; i++){
    printf("---------------BANDA %d---------------\n", (i+1));
    printf("Nome da banda: %s", banda->nome);
    printf("Tipo da banda: %s", banda->tipo);
    printf("Integrantes: %d\n", banda->integ);
    printf("Rank: %d\n", banda->rank);
    printf("-------------------------------------\n");
    banda++;		
  }
  Sleep(5000);
  system("cls");
}
void MostraPeloRank(int numb, BANDA *banda){
  int tembanda = 0;
  system("cls");
  int posicao;
  printf("Posicao no Rank:");
  scanf("%d", &posicao);
  system("cls");
  for(int i=0; i<numb; i++){
    if(posicao == banda->rank){
      printf("Nome da banda: %s", banda->nome);
      printf("Tipo da banda: %s", banda->tipo);
      printf("Numero de Integrantes: %d\n", banda->integ);
      printf("Rank: %d\n", banda->rank);
      tembanda += 1;	
    }
    banda++;	
  }
  if(tembanda == 0){
    printf("Nao tem nenhuma banda assim :(");
  }
  Sleep(5000);
  system("cls");
}
void MostraPeloTipo(int numb, BANDA *banda){

  int tembanda = 0;
  system("cls");
  char tipo[255];
  fflush(stdin);
  printf("Tipo de banda:");
  fgets(tipo,255,stdin);
  system("cls");
  for(int i=0; i<numb; i++){
    if(strcmp(strlwr(tipo),strlwr(banda->tipo))==0){
      printf("Nome da banda: %s", banda->nome);
      printf("Tipo da banda: %s", banda->tipo);
      printf("Numero de Integrantes: %d\n", banda->integ);
      printf("Rank: %d\n", banda->rank);
      tembanda += 1;	
    }
    banda++;		
  }
  if(tembanda == 0){
    printf("Nao tem nenhuma banda assim :(");
  }
  Sleep(5000);
  system("cls");
}
void MostraPeloNome(int numb, BANDA *banda){
  int tembanda = 0;
  system("cls");
  char nome[255];
  fflush(stdin);
  printf("Nome da banda:");
  fgets(nome,255,stdin);
  system("cls");
  for(int i=0; i<numb; i++){
    if(strcmp(strlwr(nome),strlwr(banda->nome))==0){
      printf("Nome da banda: %s", banda->nome);
      printf("Tipo da banda: %s", banda->tipo);
      printf("Numero de Integrantes: %d\n", banda->integ);
      printf("Rank: %d\n", banda->rank);
      tembanda += 1;
    }
    banda++;			
  }
  if(tembanda == 0){
    printf("Nao tem nenhuma banda assim :(");
  }
  Sleep(5000);
  system("cls");
}