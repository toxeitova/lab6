#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> arr = {4, 1, 2, 4, 6, 4, 3};
    int value = 4;


    int freq = count(arr.begin(), arr.end(), value);
    int minVal = *min_element(arr.begin(), arr.end());
    int maxVal = *max_element(arr.begin(), arr.end());

    cout << "Count of " << value << ": " << freq << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
