#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a total value of your item "; cin >> a ;
    if ( a >= 200 ) {
        cout << "You receive a dicount of 10%" <<endl;
        a *=0.9;
    }
    cout << "The price is " << a << endl;
}