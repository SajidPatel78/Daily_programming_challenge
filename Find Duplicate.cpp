#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const vector<int>& arr) {
    int tortoise = arr[0];
    int hare = arr[0];
    
    do {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    } while (tortoise != hare);

    tortoise = arr[0];
    while (tortoise != hare) {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    return hare;
}

int main() {
    vector<int> arr = {3, 1, 3, 4, 2};
    int duplicateNumber = findDuplicate(arr);
    cout << "Duplicate Number: " << duplicateNumber << endl;

    return 0;
}
