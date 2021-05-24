#include <iostream>
#include <iomanip>


using namespace std;


int main(){

    int vet[5];
    int p, i, pos, neg;

    p = 0;
    i = 0;
    pos = 0;
    neg = 0;

    for(int j = 0; j < 5; j++){
        cin >> vet[j];
    }

    for(int j = 0; j < 5; j++){

        if((vet[j] % 2) == 0){
            p++;
        } else{
            i++;
        }

        if(vet[j] > 0){
            pos++;
        } else if(vet[j] < 0){
            neg++;
        }

    }

    cout << p << " valor(es) par(es)\n";
    cout << i << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";

    return(0);

}
