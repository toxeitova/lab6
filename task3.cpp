#include <iostream>
using namespace std;

string reverseString(string s) {
    if (s.length() <= 1) return s; 
    return reverseString(s.substr(1)) + s[0]; 
}

int main() {
    string s;
    cin >> s;

    if (s.length() > 50) {
        cout << "Invalid input. String length must be 50 or less." << endl;
        return 1;
    }

    cout << reverseString(s) << endl;
    return 0;
}
