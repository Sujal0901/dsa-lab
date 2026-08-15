#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    
    for (int i = 0; i < k; i++) {
        int first = a[0];

        for (int j = 0; j < n - 1; j++) {
            a[j] = a[j + 1];
        }

        a[n - 1] = first;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}