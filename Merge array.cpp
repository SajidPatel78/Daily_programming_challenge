#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
    int i = m - 1; 
    int j = n - 1; 
    int k = m + n - 1; 

    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7, 0, 0, 0, 0};
    vector<int> arr2 = {2, 4, 6, 8};
    int m = 4; 
    int n = 4; 

    merge(arr1, m, arr2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
