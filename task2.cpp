#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid input. n must be between 0 and 20." << endl;
        return 1; 
    }
    cout << fibonacci(n) << endl;
    return 0;
}
