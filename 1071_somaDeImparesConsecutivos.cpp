#include <iostream>


using namespace std;


int main(){

    int X, Y, soma;

    cin >> X >> Y;

    soma = 0;
    if(X <= Y){

        for(int i = (X+1); i < Y; i++){

            if((i % 2) != 0){
                soma += i;
            }

        }

    } else if(Y <= X){

        for(int i = (Y+1); i < X; i++){

            if((i % 2) != 0){
                soma += i;
            }

        }

    }

    cout << soma << "\n";

    return(0);

}
