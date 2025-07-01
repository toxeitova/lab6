#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 12) {
        cout << "Invalid input. n must be between 0 and 12." << endl;
        return 1;
    }

    cout << factorial(n) << endl;
    return 0;
}
