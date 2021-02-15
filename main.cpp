#include <iostream>
#include <string>
#include <vector>
#include "Balde.h"
#include "Diretorio.h"

using namespace std;

vector<string> Bits;

string criaBits(int num);
{
    char greeting[num+1];

    for int i=0; i<num; i++
    {
        bit + ((rand() % 1000000) % 2);
    }

    return bit;
}

int main()
{
    int N = 5;
    int M, B;
    Diretorio dir = Diretorio(N);

    cout << "Insira o tamanho dos baldes:" << endl;
    cin >> M;
    cout << "Insira o numero de Bits para cada pseudo-chave:" << endl;
    cin >> B;

    for(int i=0; i < N; i++)
        Bits.insert(criaBits(B));

    Balde *b = new Balde(M, 1);
    b->adicionaChaves(Bits, N);

    dir.Insere(Bits);
    dir.Busca(00, N);

    return 0;
}
