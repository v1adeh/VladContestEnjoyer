#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;




int main() {
    vector <string> info; // vector - динамический массив в который можно добавить переменный с помощью функции push_back
    while (true) {
        string a;
        cin >> a;
        if (a == "end") break;
        info.push_back(a);
    }
    set<string> b; // контейнер - который может хранить только уникальные значения
    
    for (auto i = info.begin(); i != info.end(); ++i ) {
        if (count(info.begin(), info.end(), *i) > 1) {        //*i разыменование указателя
            b.insert(*i);
        }
    }
    for (auto i = b.begin(); i != b.end(); ++i){
        cout << *i << " ";
    }
    cout << "\n";


}


 

