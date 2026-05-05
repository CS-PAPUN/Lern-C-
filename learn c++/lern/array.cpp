#include <iostream>
using namespace std;

int main() {
    int a[6];
    int b1,b2,b3,b4,b5,b6;

    for (int i = 0;i < 6; i++) {
        a[i] = i*10;
        //bi = i*10 // ทำไม่ได้
    }
    a[1] = a[5] = -1;
    cout << a[0] + a[4] << endl;
}