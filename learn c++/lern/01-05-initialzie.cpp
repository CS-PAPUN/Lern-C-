#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a = 12345678900;
    int b = 12345678900;
    cout << a << " , " << b << endl; 

    cout << setprecision(15) << a << endl;

}