#include <iostream>
#include <vector>


using namespace std;


int main(){

    int n1, n2, n3, aux;
    vector<int> vet;

    cin >> n1 >> n2 >> n3;

    vet.push_back(n1);
    vet.push_back(n2);
    vet.push_back(n3);

    for(int i = 0; i < vet.size(); i++){

        for(int k = 0; k < vet.size()-1; k++){

            if(vet[k] >= vet[k+1]){
                aux = vet[k];
                vet[k] = vet[k+1];
                vet[k+1] = aux;
            }

        }

    }


    for(int l = 0; l < vet.size(); l++){
        cout << vet[l] << "\n";
    }
    cout << "\n";

    cout << n1 << "\n";
    cout << n2 << "\n";
    cout << n3 << "\n";

    return(0);

}
