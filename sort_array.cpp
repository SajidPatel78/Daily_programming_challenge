#include <iostream>
#include <vector>

void sortArray(std::vector<int>& arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            std::swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            std::swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main() {
    std::vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    
    sortArray(arr);
    
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}