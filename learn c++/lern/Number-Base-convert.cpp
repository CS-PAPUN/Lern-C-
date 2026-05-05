#include <iostream>
#include <string>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;   int a;

    s = "1FF";
    a = stoi(s,0,16);
    cout << a << endl;

    s = "100101";
    a = stoi(s,0,2);
    cout << a << endl;
}