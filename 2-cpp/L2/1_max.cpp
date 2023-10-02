// 1- create a function to ﬁnd the maximum number of array
#include <iostream>
using namespace std;

int max_in_array(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}




int main() {
    int arr[7] = {1,-100,50,100,800,-50,90};
    cout << max_in_array(arr, 7) << endl;
}