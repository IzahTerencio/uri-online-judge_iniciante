#include <iostream>
#include <math.h>


using namespace std;


int main(){

    int N;

    cin >> N;
    for(int i = 1; i <= N; i++){

        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << "\n";

    }

    return(0);

}
