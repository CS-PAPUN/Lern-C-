#include <bits/stdc++.h>
using namespace std;

void print(int c[],int n) {
    for (int i = 0; i < n; i++)
        cout << c[i] << " ";
    cout << endl;
}

int main() {
    int z[6];
    int a[3] = {1,2,3};
    int b[5] = {1,2};
    int c[] = {11,22,33,44};
    //int c[3] = {10,20,30,40};
    print(z,6);
    print(a,3);
    print(b,5);
    print(c,4);
}