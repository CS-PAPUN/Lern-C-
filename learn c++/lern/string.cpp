#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "asdf";
    cout << "the string is " << s << endl;

    cout << "Enter your name: ";
    cin >> s;
    cout << "Your name is " << s << endl;

    string s1, s2;
    cout << "Please enter  two words: ";
    cin >> s1 >> s2;    
    cout << "First word is " << s1 << endl;
    cout << "Second word is " << s2 << endl;

    cout << "Please enter two integers: ";
    int a,b;
    cin >> a >> b;
    cout << "Sum is " << a + b <<endl;
}