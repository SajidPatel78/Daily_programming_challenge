#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int n) {\
    int total_sum = n * (n + 1) / 2;

    int array_sum = 0;
    for(int num : arr) {
        array_sum += num;
    }

    return total_sum - array_sum;
}

int main() {

    vector<int> arr = {1, 2, 4, 5};
    int n = 5; 
    int missing_number = findMissingNumber(arr, n);
    cout << "Missing Number: " << missing_number << endl;

    return 0;
}