#include <iostream>
#include <algorithm>

using namespace std;

string ltrs = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main() {
    int a; 
    cin >> a;
    
    string b;
    
    while (a > 0) {
        b += ltrs[(a - 1) % 26];
        a = (a - 1) / 26;
    }    
    reverse(b.begin(), b.end());
    cout << b << " ";
}


 
