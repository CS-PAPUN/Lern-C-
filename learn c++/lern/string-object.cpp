#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Phuphu";
    cout << "The string is " << s << endl;
    cout << "The lenght is " << s.length() << endl;
    cout << "First char is " << s[0] << endl;
    cout << "Last char is " << s[s.length() - 1] << endl;
}