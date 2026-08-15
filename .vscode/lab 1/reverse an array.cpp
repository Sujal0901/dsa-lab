#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;

    int l = 0, r = n - 1;

    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}