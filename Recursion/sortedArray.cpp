// check if array is sorted or not

#include <iostream>
#include <vector>
using namespace std;

bool sortedArray(vector<int> &arr, int n){
    if(n==1)
        return true;

    bool restArray = sortedArray(arr, n-1);
    if(arr[n-2]<=arr[n-1] && restArray){
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << sortedArray(arr, n);
    return 0;
}