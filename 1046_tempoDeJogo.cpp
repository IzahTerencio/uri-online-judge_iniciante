#include <iostream>
#include <vector>


using namespace std;


int main(){

    int inicio, fim, duracao;

    cin >> inicio >> fim;

    if((inicio < 12) && (fim >= 12)){

        duracao = fim - inicio;

    } else{

        inicio = inicio - 12;
        fim = fim + 12;
        duracao = fim - inicio;

    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)\n";

    return(0);

}
