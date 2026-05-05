#include <iostream>
using namespace std;

int get_max(int a[], int n) {
    int max_pos = 0;
    for (int i = 0; i < n; i++) {
        max_pos = i;
    }
    return a[max_pos];
}