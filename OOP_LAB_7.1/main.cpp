#include <iostream>
#include <vector>


int findSmallestEven(const std::vector<int>& arr) {
    int smallestEven = INT_MAX; 
    for (int num : arr) {
        if (num % 2 == 0 && num < smallestEven) { 
            smallestEven = num; 
        }
    }
    return smallestEven;
}


void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    
    std::vector<int> array = { 19, 18, 12, 11, 7, 20, 8 };

    
    std::cout << "array: ";
    printArray(array);

    
    int smallestEven = findSmallestEven(array);

    
    if (smallestEven != INT_MAX) {
        std::cout << "SmallestEven: " << smallestEven << std::endl;
    }
    else {
        std::cout << "Even element no." << std::endl;
    }

    return 0;
}
