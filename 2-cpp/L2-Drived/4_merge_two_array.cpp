#include <iostream>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;

    int mergedArray[mergedSize];

    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = arr2[i];
    }

    std::cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; ++i) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
