#include <iostream>
using namespace std;
int main() {
    string s,s2;
    cout << "Enter a string: "; cin >> s;
    cout << "Enter a char: "; cin >> s2;
    int pos = 0;
    bool found = false;
    for (auto c : s) {
        if (s2[0] == c) {
            found = true;
            break;
        }
        pos++;
    }
    if (found) {
        cout << "Found " << s2[0] << "at position " << pos << endl;
    }else {
        cout << "Not found" << endl;
    }
}