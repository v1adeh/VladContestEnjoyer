#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

float a;
float b;
float imt;

int main() {
    cin >> a >> b;
    imt = a / (b*b);
    cout << setprecision(17) << imt;
}
