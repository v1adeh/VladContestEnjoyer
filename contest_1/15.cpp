#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

string a;
string b;



int main() {
    cin >> a;
    
    for (int i = 0; i < a.length(); i++) {
        if (i > 0 && a[i] == a[i - 1]) continue;
        int count = 1;


    for (int j = i + 1; j < a.length(); j++) {
        if (a[i] == a[j]) {
            count += 1;
        }
        else {
            break;
        }
    }
    b += a[i];
    if (count != 1) {
        b += to_string(count);
    }
  }
    cout << b << "\n";
}


 
