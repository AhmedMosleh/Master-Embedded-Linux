// 5-ﬁnd the even and odd numbers in the array
#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int arr[7] = {1,-100,50,101,803,-50,90};
    for (int val : arr) {
        if(val%2 == 0) { cout << "it's even: " << val << endl;}
        else           { cout << "it's odd: " << val << endl;}
    
    }
}