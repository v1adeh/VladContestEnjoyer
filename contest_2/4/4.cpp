#include <iostream>
#include <tuple>

#include <utility>
#include <algorithm>
#include <numeric>

using namespace std;

pair <int , int> reduce(int a, int b) {               // нахождение НОД
    int g = gcd(a,b);                       // gcd возвращает наибольший обший делитель 
    return make_pair(a / g, b / g); 
}

tuple <int, int, int> find_lcm(int a , int b) {         //нахождение НОК
    int l = lcm(a , b);                                 //функция lcm вычисляет наименьшее общее кратное целых чисел
    return make_tuple(l, l / a , l / b);
}


int func() {
    int m1, n1, m2, n2;
    char _;
    std::cin >> m1 >> _ >> n1
             >> m2 >> _ >> n2;
    std::tie(m1, n1) = reduce(m1, n1);
    std::tie(m2, n2) = reduce(m2, n2);

    auto[lcm, c1, c2] = find_lcm(n1, n2);
    auto[m, n] = reduce(m1 * c1 + m2 * c2, lcm);

    std::cout << m << '/' << n << std::endl;
}
