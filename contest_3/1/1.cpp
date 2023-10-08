#include <iostream>
#include <set>

using namespace std;

int main () {
	multiset <float> info;
	int a;
	cin >> a;
	for(int i = 0; i < a; i++) {
		float temp;
		cin >> temp;
		info.insert(temp);
	}
	cin >> a;
	for(int i = 0; i < a; i++){
		float temp;
		cin >> temp;
		info.insert(temp);
	}
	for (auto i : info) {
		cout << i << " ";
	}
	cout << " ";

}	
