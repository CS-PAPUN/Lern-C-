#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter scroe: " <<endl;
    cin >> a >> b >> c;
    int sum = a + b + c;
    if (sum >= 80){
        cout << "A" << endl;
    }else if(sum >= 75 && sum <= 79){
        cout << "B+" << endl;
    }else if (sum >= 70 && sum <= 74){
        cout << "B" << endl;
    }else if (sum >= 65 && sum <= 69){
        cout << "C+" << endl;
    }else if (sum >= 60 && sum <= 64){
        cout << "C" << endl;
    }
}