#include <iostream>
#include <iomanip>


using namespace std;


int main(){

    string nome;
    double sal, vendas, p;

    cin >> nome;
    cin >> sal >> vendas;

    p = (vendas*15)/100;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << (sal + p) << "\n";

    return(0);

}
