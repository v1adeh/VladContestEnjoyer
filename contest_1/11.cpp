#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;


int a , b , c;
int dob;
int doc;


int main() {
    cin >> a >> b >> c;
    dob = abs(a - b);
    doc = abs(a - c);
    
    if (dob < doc){
        cout << "B " << dob;
    }
    else if (doc < dob) {
        cout << "C " << doc;
    }
}
