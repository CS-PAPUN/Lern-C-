#include <iostream>
#include <string>
using namespace std;
int main() {
    string p1 = "Kumpun", p2 = "aa";
    string p3 = p1 + p2;
    string p4 = p1 + "---" + p2;
    //string p5 = "Kumpun" + "aa";

    cout << p3 << endl;
    cout << p4 << endl;
    //cout << p5 << endl;
}