#include <iostream>
using namespace std;
int main() {
    cout << ("a" == "a") <<endl;
    cout << ("a" < "a") << endl;
    cout << ("a" < "aa") << endl;
    cout << ("aa" < "aaa") << endl;
    cout << ("ab" < "aaa") << endl;
    cout << ("ab" < "a") << endl;
    cout << ("ab" < "ac") << endl;
}