#include <iostream>
#include <string>
#include <complex.h>
using namespace std;

class Complex {
private:
    complex<double> num;

public:
    Complex(const string& input) {
        double re, im;
        stringstream ss(input);
        ss >> re;
        string im_str;
        ss >> im_str;
        if (im_str.length() == 1) {
            string temp;
            ss >> temp;
            im_str += temp;
        }
        im = stod(im_str);  
        num = complex<double>(re, im);
    }

    Complex(complex<double> init_num) {
            num = init_num;
        }

    double real() const {
        return num.real();
    }
    double imag() const {
        return num.imag();
    }

    Complex operator+(const Complex& other) const {
        return Complex(num + other.num);
    }
    Complex operator-(const Complex& other) const {
        return Complex(num - other.num);
    }
    Complex operator*(const Complex& other) const {
        return Complex(num * other.num);
    }
    Complex operator/(const Complex& other) const {
        return Complex(num / other.num);
    }

     friend std::ostream& operator<<(std::ostream& out, const Complex& num){
            double re = num.real();
            double im = num.imag();
            out << (re == 0.0 ? 0.0 : re)
                << (im < 0 ? "":"+")
                << (im == 0.0 ? 0.0 : im) << 'j';
            return out;
        }
};
