// Q). GIven an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.

// CONSTRAINTS : 1 <= N <= 10^(5)
//               0 <= A(i) <= 10^(10)

#include <iostream>
using namespace std;

int main(){
    int n, S, sum=0;
    cin >> n >> S;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int i=0, j=0, st=-1, en=-1;

    while(j<n && sum+arr[j]<=S){
        sum += arr[j];
        j++;
    }

    if(sum == S){
            cout << i+1 << " " << j;
            return 0;
        }

    while(j<n){
        sum += arr[j];
        while(sum > S){
            sum -= arr[i];
            i++;
        }
        if(sum==S){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    cout << st << " " << en;


    return 0;
}