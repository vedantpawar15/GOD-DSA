#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying values to the divided left array
    int mainArrayIndex = s;
    for (int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    //copying values to the divided right array
    int k = mid + 1;
    for (int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted left & right arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = first[index2++];
        }
    }

    while( index1 < len2) {
        arr[mainArrayIndex++] = first[index2++];
    }
}

int mergeSort(int *arr, int s, int e) {

    //base case 
    if(s>=e) {
        return;
    }

    int mid = s + (e-s)/2;

    //sorting left part
    mergeSort(arr, s , mid-1);

    //sorting right part
    mergeSort(arr, mid+1, e);

    //merging
    merge(arr, s, e);
}

int main() {
    int arr[6] = {1, 5, 6, 3, 4, 2};
    int n = 6;

    mergeSort(arr, 0 , n-1);

    for(int i=0; i<n ;i++){
        cout << arr[i] << " ";
    } cout << endl;
    
    return 0;
}