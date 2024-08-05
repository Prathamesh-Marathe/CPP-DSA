#include <iostream>
using namespace std;

bool linearSearch(int arr[], int key){
    int flag=0;
    for(int i=0; i<sizeof(arr); i++){
        if(arr[i]==key){
            cout << key << " found at location " << i+1;
            flag=1;
            break;
        }
        else{
            flag=0;
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
    linearSearch(arr, key);
    return 0;
}