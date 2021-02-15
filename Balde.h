#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Balde
{
    public:
        Balde(int, int);
        ~Balde();
        string getPseudoChave();
        void setPseudoChave(string);
        void adicionaChaves(vector<string>, int);
        string getBitsAssociados();
        void setBitsAssociados(string);

    private:
        //string pseudoChave;
        vector<string> bucket;
        int* p;
        int profundidadeLocal;
        string bitsAssociados;
};
