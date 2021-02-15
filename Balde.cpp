#include "Balde.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//string pseudoChave;
vector<string> bucket;
int profundidadeLocal;

char bitsAssociados[2] = 00;

Balde::Balde(int M, int profundidade)
{
    bucket.resize(M);
    profundidadeLocal = profundidade;
}

Balde::~Balde()
{
    cout << "kill";
    delete p;
}

Balde::void adicionaChaves(vector bits, int M)
{
    for(int i=0; i<M; i++)
    {
        bucket[i] = bits[i];
    }
}

string Balde::getBitsAssociados()
{
    return bitsAssociados;
}

void Balde::setBitsAssociados(string bits)
{
    bitsAssociados = bits;
}
