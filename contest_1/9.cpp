#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

float a;
float b;
float c;


int main() {
    cin >> a >> b;
    if ( a > 0 && b > 0) {
        c = sqrt((a*a) + (b*b));
        cout << setprecision(16) << c;
    }
    else cout  << "error";
}
