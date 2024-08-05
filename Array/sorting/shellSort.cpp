#include <iostream>
#include <utility>
using namespace std;

class shellSort{
    public:
    void performSort(int n, int arr[]);
};

void shellSort::performSort(int n, int arr[]){
    int gap = n/2;

    while(gap >= 1){
        int i=0, j=gap;
        while(j <= n-1){
            int m = i-gap;
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                if(m >= 0){
                    if(arr[j] < arr[m]){
                        swap(arr[m], arr[j]);
                    }
                }
            }
            i++, j++;
        }
        gap = gap/2;
    }

    for(int k=0; k<n; k++){
        cout << arr[k] << " ";
    }
}

int main(){
    int n, arr[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    shellSort s;
    s.performSort(n, arr);
    return 0;
}