#include <iostream>
#include <set>

using namespace std;

int main () {
	set <string> first, end;
	int a;
	cin >> a;
	for(int i = 0; i < a; i++) {
		string temp;
		cin >> temp;
		first.insert(temp);
	}
	cin >> a;
	for(int i = 0; i < a; i++){
		string temp;
		cin >> temp;
        if (first.count(temp) > 0){
		end.insert(temp);
        }
	}
    if(end.empty()){
        cout << -1 << " ";
    }

	for (auto i : end) {
		cout << i << " ";
	}
	cout << " ";

}	
