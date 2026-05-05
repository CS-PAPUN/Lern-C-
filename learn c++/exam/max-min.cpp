#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter number: "; cin >> a >> b >> c;

    int mx,mn;

    if (a >= b && a >=c) {mx = a;}
    else if (b >= a && b >= c) {mx = b;}
    else {mx = c;}

    if (a <= b && a <= c) {mn = a;}
    else if (b <= a && b <= c) {mn = b;}
    else {mn = c;}

    cout << "Max: " << mx << endl;
    cout << "Min: " << mn << endl;
}