#ifndef struct_h
#define struct_h

typedef struct banda{
  char nome[255], tipo[255];
  int integ, rank;
}BANDA;
void CadastraBanda(int numb, BANDA *banda);
void MostraPeloRank(int numb, BANDA *banda);
void MostraPeloTipo(int numb, BANDA *banda);
void MostraPeloNome(int numb, BANDA *banda);
void MostraTodasBandas(int numb, BANDA *banda);

#endif