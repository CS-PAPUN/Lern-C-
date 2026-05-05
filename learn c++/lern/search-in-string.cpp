#include <iostream>
#include <string>
using namespace std;
int main() {
    string p = "This box has a book";
    cout << p.find("has") << endl;
    cout << p.find("bo") << endl;
    cout << p.find("bo", p.find("bo")+1) << endl;

    cout << "---" << endl;
    cout << p.find("car") << endl;
    if (p.find("car") == string::npos) {
        cout << "Not found" << endl;
    }
}