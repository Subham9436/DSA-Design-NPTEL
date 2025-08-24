#include <iostream>
using namespace std;
int main() {
    int x, x1 = 0, x2 = 1, newnumber;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> x;
    if (x <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit if the input is not valid
    }
    // Print the Fibonacci series
    for (int i = 0; i < x; i++) {
        if (i == 0) {
            cout << x1 << " ";
            continue;
        }
        if (i == 1) {
            cout << x2 << " ";
            continue;
        }
        newnumber = x1 + x2;
        cout << newnumber << " "; // Output the new Fibonacci number
        x1 = x2; // Update x1 to the previous x2
        x2 = newnumber; // Update x2 to the new number
    }
    return 0;
}