#include<iostream>
using namespace std;

int main () {
    int arr[3] = {2, 4, 6};
    int *p = &arr[1];

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;

    cout << p << endl;
    cout << *p << endl; 
}