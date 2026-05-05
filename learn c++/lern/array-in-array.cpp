#include <bits/stdc++.h>
using namespace std;

void print2d(int a[][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int a[5][3];
    int b[2][3];
    int c[5][7];
    print2d(a,5,3);
    print2d(b,2,6);
    //print2d(c,5,7);
}