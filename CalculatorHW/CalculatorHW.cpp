#include <iostream>

using namespace std;

int Add(int a, int b) {
    return a + b;
}

int main() {
    double a = 10, b = 5;
    cout << "a + b = " << Add(a, b) << endl;

    return 0;
}
