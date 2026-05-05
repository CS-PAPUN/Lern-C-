#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 0;
    cout << "(1) x  before " << x << endl;
    y = x--;        // The operator
    cout << "(2) x  after " << x << endl;
    cout << "(3) y is " << y << endl;
}