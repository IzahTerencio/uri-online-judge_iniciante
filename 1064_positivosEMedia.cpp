#include <iostream>
#include <iomanip>


using namespace std;


int main(){

    double n, soma;
    int pos;

    soma = 0;
    pos = 0;
    for(int i = 0; i < 6; i++){

        cin >> n;

        if(n > 0){
            soma += n;
            pos++;
        }


    }

    cout << fixed << setprecision(1);
    cout << pos << " valores positivos\n";
    cout << (soma/pos) << "\n";

    return(0);

}
