#include <iostream>
using namespace std;

void binarySearch(int arr[], int key, int n){
    int first=0, last=n-1;
    int middle = (first+last)/2;
    int flag=0;
    while(first<=last){
        middle = (first+last)/2;
        if(key==arr[middle]){
            cout << key << " found at location " << middle+1;
            flag=1;
            break;
        }
        else if(key<arr[middle]){
            last = middle - 1;
        }
        else{
            first = middle + 1;
        }
    }
    if(flag==0){
        cout << "Element Not Found!";
    }
}

int main(){
    int n, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> key;
    binarySearch(arr, key, n);
    return 0;
}