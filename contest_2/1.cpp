#include <iostream>

// начало вставленного кода
#include <cmath>
using namespace std;

bool is_prime (int num) {
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0) return false;
    }
    return true;
}

// конец вставленного кода

int func(){
    int number;
    std::cin >> number;
    std::cout << (is_prime(number) ? "YES" : "NO") << std::endl;
}
