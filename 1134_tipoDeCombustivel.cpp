#include <iostream>


using namespace std;


int main(){

    int tipo, cGas, cAlc, cDies;

    cGas = cAlc = cDies = 0;
    do{

        cin >> tipo;

        if(tipo == 1){
            cAlc++;
        } else if(tipo == 2){
            cGas++;
        } else if(tipo == 3){
            cDies++;
        }

    }while(tipo != 4);

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << cAlc << "\n";
    cout << "Gasolina: " << cGas << "\n";
    cout << "Diesel: " << cDies << "\n";

    return(0);

}
