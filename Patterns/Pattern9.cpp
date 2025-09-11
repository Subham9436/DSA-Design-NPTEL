#include <iostream>
using namespace std;

void Pattern(int n) {
    // Upper pyramid
    for (int i = 0; i < n; i++) {
        // Spaces before pattern
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower pyramid
    for (int i = 0; i < n; i++) {
        // Spaces before pattern
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < 2 * (n - i - 1) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern(n);
    return 0;
}
