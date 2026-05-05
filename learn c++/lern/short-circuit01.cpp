#include <iostream>
using namespace std;
int main() {
    string s;
    int a;
    cout << "Enter string: "; cin >> s;
    cout << "Enter a position that contian a letter 'z': "; cin >> a;
    if(a >= 0 && a < s.length())
        if(s[a] == 'z'){
            cout << "correct!" << endl;
        } 
        else{
            cout << "incorrect" << endl;
        }
        
}