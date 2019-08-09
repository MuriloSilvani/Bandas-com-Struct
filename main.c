#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <windows.h>
#include "struct.h"

int main(int argc, char** argv){
  int op=0, numb;
  printf("Numero de Bandas:");
  scanf("%d", &numb);
  system("cls");
  BANDA banda[numb];
  CadastraBanda(numb, banda);
  do{
    printf("-----------------OI-----------------\n");
    printf(" 1 - para ver todas as bandas\n");
    printf(" 2 - para buscar bandas pelo Rank\n");
    printf(" 3 - para buscar bandas pelo Tipo\n");
    printf(" 4 - para buscar bandas pelo Nome\n");
    printf(" 5 - para dar tchau\n");
    printf("------------------------------------\n");
    scanf("%d", &op);
    switch(op){
      case 1 :
      MostraTodasBandas(numb,banda);
      break;
      case 2 :
      MostraPeloRank(numb,banda);
      break;
      case 3 :
      MostraPeloTipo(numb,banda);
      break;
      case 4 :
      MostraPeloNome(numb,banda);
      break;
      case 5 :
      system("cls");
      printf("\n\n-------------TCHAU--------------\n\n\n\n\n\n\n\n\n\n\n");
      break;
    }
  }while(op!=5);
  return 0;
}