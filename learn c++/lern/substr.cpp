#include <iostream>
#include <string>
using namespace std;
int main() {
    string p = "supanika";
    cout << p.substr(0,4) << endl;
    cout << p.substr(3,2) << endl;
    cout << p.substr(6,0) << endl;
    cout << p.substr(1) << endl;
    cout << p.substr(4,999) << endl;
    string p2 = p.substr(1,4);
    cout << p2.substr(0,1).length() << endl;
}