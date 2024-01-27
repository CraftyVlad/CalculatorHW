#include <iostream>

using namespace std;

int Add(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int Multiply(int a, int b) {
    return a * b;
}

double Divide(double a, double b) {
    if (b == 0) {
        cout << "Error: division by zero!" << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    double a = 10, b = 5;
    cout << "a + b = " << Add(a, b) << endl;
    cout << "a - b = " << Subtract(a, b) << endl;
    cout << "a * b = " << Multiply(a, b) << endl;
    cout << "a / b = " << Divide(a, b) << endl;

    return 0;
}
