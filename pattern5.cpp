#include <iostream>
using namespace std;

int main() {
    int n = 6; // Total number of rows

    for (int i = 0; i < n; i++) {
        int level = (i < n / 2) ? i + 1 : n - i; // Mirror logic

        // Print increasing numbers
        for (int j = 1; j <= level; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = level - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
