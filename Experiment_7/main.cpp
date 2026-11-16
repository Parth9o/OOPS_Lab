#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // 1. Operator Overloading:
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // 2. Function Overloading: add() with another Complex object
    void add(const Complex& other) {
        real += other.real;
        imag += other.imag;
    }

    // 2. Function Overloading: add() with a real scalar value
    void add(double r) {
        real += r;
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();
    
    // Demonstrating Operator Overloading (+)
    Complex c3 = c1 + c2;
    cout << "\nUsing Operator Overloading (c1 + c2): ";
    c3.display();

    c1.add(c2);
    cout << "\nUsing Function Overloading (c1.add(c2)): ";
    c1.display();

    c1.add(5.0);
    cout << "Using Function Overloading (c1.add(5.0)): ";
    c1.display();

    return 0;
}