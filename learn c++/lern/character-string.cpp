#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Phuphu";
    cout << "The string is " << s << endl;
    s[2] = '3';
    cout << "Now s is " << s << endl;
    s[3]++;
    cout << "Now s is " << s << endl;
    s[4] = 90;
    cout << "Now s is " << s << endl;
    int x = s[0];
    cout << x << endl;
    s[1000] = 999; //this will crash
}