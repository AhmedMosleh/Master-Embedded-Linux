// 1- create a function to ﬁnd the maximum number of array
#include <iostream>
using namespace std;

int search_in_array(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) 
        if (arr[i] == num) 
            return i;
    return -1;
}




int main() {
    int arr[7] = {1,-100,50,100,800,-50,90};
    cout << search_in_array(arr, 7,-100) << endl;
}