#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++){
        if(i % 2 ==0){
            sum += i;
        }
    }
    cout << sum;
}