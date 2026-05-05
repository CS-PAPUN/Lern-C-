#include <iostream>
using namespace std;
int main() {
    cout << true << endl;
    cout << false << endl;
    cout << (1 < 2) << endl;
    cout << (1 > 2) << endl;
    cout << "----" << endl;

    bool a,b,c;
    a = (1==2);
    b = 'a' != 'b';
    c = '1' < 'a';
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << "----" << endl;

    cout << (a || b) << endl;
    cout << (a && b) << endl;
    cout << (!a && b) << endl;
}