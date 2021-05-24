#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){

    // Cada um dos valores reais representa um lado do possível triângulo
    double l1, l2, l3;
    vector<double> vet;

    cin >> l1 >> l2 >> l3;
    vet.push_back(l1);
    vet.push_back(l2);
    vet.push_back(l3);

    cout << fixed << setprecision(1);

    sort(vet.begin(), vet.end());

    // A ideia é que se a soma dos dois valores (lados) menores for maior que
    // o lado maior, é possível formar um triângulo, e logo é possível também
    // calcular seu perímetro.
    if((vet[0] + vet[1]) > vet[2]){

        cout << "Perimetro = " << (vet[0] + vet[1] + vet[2]) << "\n";

    } else{

        cout << "Area = " << (0.5 * l3 * (l2 + l1)) << "\n";

    }


    return(0);

}
