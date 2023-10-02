// 1- create a function to ﬁnd the maximum number of array
#include <iostream>
#include <iterator>
using namespace std;

void delete_from_array(int arr[], int size, int num) {
    int idx = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            idx = i;
        }
    }
    if(idx != -1){
        for (int i = idx; i < size-1; i++) {
            arr[i] = arr[i+1];
        }
        arr[size-1] = 0;
    }

    
}




int main() {
    int arr[7] = {1,-100,50,100,800,-50,90};
    delete_from_array(arr,7,-100);
    for (int i  : arr) {
        cout << i << ' ';
    }
}