#include <bits/stdc++.h>
using namespace std;
const int MAX_ROW = 100;
const int MAX_COL = 50;

int main() {
    int matrix[MAX_COL][MAX_COL] = {0};
    int n;
    int m;
    cout << "Enter row: "; cin >> n;
    cout << "Enter col: "; cin >> m;
    if (n > MAX_ROW || m > MAX_COL){
        cout << "Size too large" << endl;
        return 0;
    }
    for (int i=0; i < n; i++) {
        cout << "Enter " << m << " values of row " << i << ": " << endl;
        for (int j =0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
}