#include <iostream>
using namespace std;
int main() {
    cout << "Start" << endl;
    if(true)
        cout << "a" << endl;
    cout << "-----" << endl;

    if(1 > 2) 
        cout << "b1" << endl;
        cout << "b2" << endl;
    cout << "-----" << endl;

    if(1 > 2) {
        cout << "c1" << endl;
        cout << "c2" << endl;
    }
    cout << "End" << endl;
}