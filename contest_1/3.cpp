#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

long double a;
long double b;

int main() {
    cin >> a >> b;
    if (b == 0){
        cout << "na 0 delit nelz9";
    }
    else {
        cout << setprecision(16) << a / b;
    };
}
