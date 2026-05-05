#include <iostream>
using namespace std;
int main() {
    int r,c;
    cout << "Enter R and C: ";
    cin >> r >> c;
    int i = 0;
    while (i < r) {
        cout << "Row " << i << ": ";
        int j = 0;
        while (j < c) {
            cout << i;
            int i = 0;
            cout << "(" << i <<")";
            j++;
        }
        cout << endl;
        i++;
    }
    //cout << j << endl; ทำไม่ได้  
}