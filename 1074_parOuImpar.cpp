#include <iostream>
#include <vector>


using namespace std;


int main(){

    int N;
    long long int x;

    cin >> N;
    for(int i=0; i < N; i++){

        cin >> x;

        if(x == 0){

            cout << "NULL\n";

        } else{

            if((x % 2) == 0){
                cout << "EVEN ";
            } else{
                cout << "ODD ";
            }

            if(x > 0){
                cout << "POSITIVE\n";
            } else{
                cout << "NEGATIVE\n";
            }

        }



    }

    return(0);

}
