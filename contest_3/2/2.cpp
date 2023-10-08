#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool checkBalance (string input) {
    stack<char> stack;
    for (char i : input) {
        if (i == '(' || i == '{' || i == '[') {
            stack.push(i);
        } else if (i == ')' || i == '}' || i == ']') {
            if (stack.empty()) {
                return false; // Найдена закрывающая скобка, но стек пуст
            }
            char temp = stack.top();
            stack.pop();
            if ((i == ')' && temp != '(') || (i == '}' && temp != '{') || (i == ']' && temp != '[')) {
                return false; // Скобки разного типа
            }
        }
    }
    return stack.empty(); // Проверяем, пуст ли стек в конце
}


int main() {
    string info;
    getline(cin, info, '!');

    if (checkBalance(info)) {
		cout << "YES";
	}
	else cout << "NO";
}
