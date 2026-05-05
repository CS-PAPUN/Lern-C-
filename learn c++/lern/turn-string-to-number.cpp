#include <iostream>
#include <string>
using namespace std;
int main() {
    string p = "789";
    int a;
    a = p[0] - '0';
    cout << a << endl;
    a = p[1] - '0';
    cout << a << endl;

    //a = p ไม่ได้
    a = stoi(p);
    cout << a + 1000 << endl;
}