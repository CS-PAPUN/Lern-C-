#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--){  //i <= n ได้แต่ต้องใช้ break
        cout << i << " ";
        /*if (i == 1) {
            break;
        }*/
    }
}