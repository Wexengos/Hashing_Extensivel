#include <iostream>
#include <string>

using namespace std;

class Diretorio
{
    public:
        Diretorio(int);
        ~Diretorio();
        void Insere(string);
        int* Busca(int);
    private:
        int *p;
        vector<Balde> Dir;
};
