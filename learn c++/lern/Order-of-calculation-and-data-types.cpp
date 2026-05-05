#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double r = 30;
    double v1 = 4 / 3 * M_PI * r * r * r;
    double v2 = r * r * r * 4 / 3 * M_PI;

    cout << v1 << endl;
    cout << v2 << endl;
}