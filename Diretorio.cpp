#include "Balde.h"
#include "Diretorio.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<Balde> Dir;
int profundidade;

Diretorio::Diretorio(int N)
{
    Dir.resize(N);
    profundidade = log2(N);
}

Diretorio::~Diretorio()
{
    Dir.clear();
}

void Diretorio::Insere(string pseudoChave)
{
    int hk = k % 13;

    int d = log2(Dir.size());
    char index[d] = 0;

    for(int i=0; i<d; i++)
    {
        index + pseudoChave[i];
    }
    for(int i=0; i<Dir.size(); i++)
    {
        if Dir[i].getBitsAssociados() == index;
        Dir.insert(pseudoChave);
    }

}

int* Diretorio::Busca(int k, int N)
{
    int hk = k % 13;
    int *buscador;
    buscador = NULL;

    for(int i=0; i<N; i++)
    {
        if Dir[i].getBitsAssociados() == hk;
        buscador = &Dir[i];
    }
    //string
}
