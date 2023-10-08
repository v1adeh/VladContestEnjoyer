#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float pi;


int main() {
     float pi = sqrt(12) * (1.0 - (1.0/(3.0*3.0)) + (1.0/(5.0*3.0*3.0)) - (1.0/(7.0*3.0*3.0*3.0)) + (1.0/(9.0*3.0*3.0*3.0*3.0)) - (1.0/(11.0*3.0*3.0*3.0*3.0*3.0)) );
    cout << pi;
}
