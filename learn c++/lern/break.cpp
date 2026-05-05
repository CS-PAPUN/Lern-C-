#include <iostream>
using namespace std;
int main() {
    string s, s2;
    char c;
    cout << "Enter string: "; cin >> s;
    cout << "Enter char: "; cin >> s2;
    c = s2[0];
    int i = 0, pos;
    bool found = false;
    while (i < s.length()) {
        if(s[i] == c) {
            found = true;
            pos = i;
            break;
        }
        cout << "Checked at " << i << endl;
        i++;
    } 
    if (found) {
        cout << "Found " << c << " at position " << pos << endl;
    }else{
        cout << "Not found " << endl;
    }
}