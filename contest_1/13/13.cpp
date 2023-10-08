#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

int a;
int count = 1; 
int c = 1; 
int d = 1; 
int r = 3;


int main() {
    cin >> a;
   while(count <= a ){
            for (int i=0; i < c && count <= a ; ++i)
                cout << count++ << " ";
                cout << endl;
            c += d;
            if (c < 1){
                d = 1;
                c = 2;
                ++r;
            }
            else if (c >= r ){
                d = -1;
                c -= 2;
            }
    }
}
