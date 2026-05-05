#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;

    cout << "Enter number: "; cin >> a >> b;
    int suma = a % 2, sumb = b % 2;
    

    if (suma == 0 && sumb == 0) {cout << "Both Even";}
    else if (suma != 0 && sumb != 0) {cout << "Both Odd";}
    else if (suma != 0 && sumb == 0) {cout << "Even is a, Odd is b";}
    else {cout << "Even is b, Odd is a";}


}
