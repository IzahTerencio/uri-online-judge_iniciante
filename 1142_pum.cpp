#include <iostream>
#include <math.h>


using namespace std;


int main(){

    int N, cont;

    cin >> N;
    cont = 1;
    for(int i = 1; i <= N; i++){

        cout << cont << " ";
        cont++;
        cout << cont << " ";
        cont++;
        cout << cont << " PUM\n";
        cont += 2;

    }

    return(0);

}
