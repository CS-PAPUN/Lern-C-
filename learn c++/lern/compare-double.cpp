#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double a = 987654.23456789;
    double b = 0.1234567;
    double c = 3456789123;

    double a1 = a / b / c;
    double a2 = a / c / b;

    if (a == b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    cout << setprecision(20);
    cout << a1 << endl << a2 << endl;

    if (fabs(a - b) < 1e-9) {
        cout << "YES" << endl;
    }
}