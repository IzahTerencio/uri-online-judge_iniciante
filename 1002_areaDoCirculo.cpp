#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const double pi = 3.14159;

int main() {

     double R, A;

     cin >> R;

     A = pi*(pow(R,2));

     cout << fixed << setprecision(4);

     cout << "A=" << A << endl;

    return 0;
}
