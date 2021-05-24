#include <iostream>
#include <iomanip>


using namespace std;



int main(){

    double n1, n2, n3, n4, media, notaExame;

    cin >> n1 >> n2 >> n3 >> n4;

    media = (2*n1 + 3*n2 + 4*n3 + 1*n4)/10;

    cout << fixed << setprecision(1);

    cout << "Media: " << media << "\n";

    if(media >= 7.0){

        cout << "Aluno aprovado.\n";

    } else if(media < 5.0){

        cout << "Aluno reprovado.\n";

    } else if((media >= 5.0) && (media <= 6.9)){

        cout << "Aluno em exame.\n";

        cin >> notaExame;

        cout << "Nota do exame: " << notaExame << "\n";

        media = (media + notaExame)/2;

        if(media >= 5.0){

            cout << "Aluno aprovado.\n";

        } else if(media <= 4.9){

            cout << "Aluno reprovado.\n";

        }

        cout << "Media final: " << media << "\n";

    }

    return(0);

}
