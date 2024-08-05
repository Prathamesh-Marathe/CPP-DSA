// Q). Given an array arr[] of size N. The task is to find the first repeating element in the array of integers i.e, an element that occur more than once and whose index 
//     of first occurence is smallest.

//     CONSTRAINTS : 1 <= N <= 10^(6)
//                   0 <= A(i) <= 10^(6)

#include <iostream>
using namespace std;

int main(){
    int n, count=1, i=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    while(count<2 || i<n){
        
        i++;
    }
    return 0;
}