#include <iostream>
#include <map>

using namespace std;

int main() {
    int a;
    cin >> a;
	cin.ignore(1);
    map<string, int> users;
    for (int i = 0; i < a; i++) {
        string login;
		getline (cin, login, ';');
        int balance;
        cin >> balance;
		cin.ignore(1);
        users[login] = balance;
    }
    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        string login;
        cin >> login;
        cout << users[login] << " ";
    }

    return 0;
}
