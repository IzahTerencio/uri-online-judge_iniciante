#include <iostream>
#include <vector>
#include <math.h>


using namespace std;


int main(){

    double A, B, C, aux;
    vector<double> vet;

    cin >> A >> B >> C;

    vet.push_back(A);
    vet.push_back(B);
    vet.push_back(C);

    // Utilizando o código do problema 1042 (Sort Simples) para ordenar os valores
    for(int i = 0; i < vet.size(); i++){

        for(int k = 0; k < vet.size()-1; k++){

            if(vet[k] >= vet[k+1]){
                aux = vet[k];
                vet[k] = vet[k+1];
                vet[k+1] = aux;
            }

        }

    }

    // Como na ordenação, o maior valor está na última posição do vetor,
    // ele será o valor A. Seguido do segundo maior, B, e do menor, C

    // se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    if(vet[2] >= (vet[1] + vet[0])){

        cout << "NAO FORMA TRIANGULO\n";

    } else{

        // se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
        if(pow(vet[2], 2) == (pow(vet[1], 2) + pow(vet[0], 2))){
            cout << "TRIANGULO RETANGULO\n";
        }

        // se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
        if(pow(vet[2], 2) > (pow(vet[1], 2) + pow(vet[0], 2))){
            cout << "TRIANGULO OBTUSANGULO\n";
        }

        // se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
        if(pow(vet[2], 2) < (pow(vet[1], 2) + pow(vet[0], 2))){
            cout << "TRIANGULO ACUTANGULO\n";
        }

        // se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
        if((A == B) && (A == C)){

            cout << "TRIANGULO EQUILATERO\n";

        } else if((A == B) || (A == C) ||(B == C)){ // se apenas dois dos lados forem iguais
            cout << "TRIANGULO ISOSCELES\n";       // apresente a mensagem: TRIANGULO ISOSCELES
        }

    }



    return(0);

}
