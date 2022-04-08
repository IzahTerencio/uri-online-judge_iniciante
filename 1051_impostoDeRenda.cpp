#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salario, imposto, taxa, resto;
    imposto = 0.0;

    cin >> salario;

    if(salario > 2000.0){
        resto = salario - 2000.0; // isento
    }

    if(resto>=1000.0){
        imposto += 1000.0*(8.0/100.0);
        resto -= 1000.0;

        if(resto > 0){

            if(resto >= 1500.0){
                imposto += 1500.0*(18.0/100.0);
                resto -= 1500.0;
                imposto += resto*(28.0/100.0);
            } else{
                imposto += resto*(18.0/100.0);
            }

        }
    } else{
        imposto += resto*(8.0/100.0);
    }

    if(salario <= 2000.0){
        cout << "Isento\n";
    } else{
        cout << "R$ ";
        cout << fixed << setprecision(2) << imposto << "\n";
    }

    return 0;
}
