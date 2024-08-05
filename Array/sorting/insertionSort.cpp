#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<n; i++){         // Displaying array elements
        cout << arr[i] << " ";
    }
}

int main(){
    int n;         // Size of the array
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertionSort(arr, n);
    return 0;
}

// void insertionSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         int minElement;
//         int minIndex = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         int count = minIndex-1;
//         minElement = arr[minIndex];
//         while(count>=i){
//             arr[count+1] = arr[count];
//             count--;
//         }
//         arr[i]=minElement;
//     }

//     for(int i=0; i<n; i++){         // Displaying array elements
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int n;         // Size of the array
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     insertionSort(arr, n);
//     return 0;
// }