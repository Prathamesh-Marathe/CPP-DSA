// Q). max till i
// Given an array of size n. For every i from o to n-1 output will be max of arr[0], arr[1], _ _ _, arr[i]

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int j=0; j<n; j++){
        cin >> arr[j];
    }
    int maximum = arr[0];
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            maximum = arr[i+1];
        }
        cout << maximum << " ";
    }
    return 0;
}