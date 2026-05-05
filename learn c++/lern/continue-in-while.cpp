#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int i = 0;
    while (i < 10) {
        cout << "round " << i << endl;
        if (i % 2 == 0)
            continue;
        sum += i;
        i++;    
    }
    cout << "Sum of odd number is " << sum << endl;
}