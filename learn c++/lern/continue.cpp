#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for(int i = 0; i < 10; i++){
        cout << "Round " << i << endl;
        if(i % 2 == 0) //ถ้าค่าIหารแล้วเป็นคู่จะกลับไปทำforใหม่
            continue;
        sum += i;
    }
    cout << "Sum of odd number is " << sum << endl;
}