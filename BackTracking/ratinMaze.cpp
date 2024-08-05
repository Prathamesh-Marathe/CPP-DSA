// Backtracking :- Backtracking is an algorithmic-technique for solving recursive problems by trying to build every possible solution incrementally and removing those
// solutions that fail to satisfy the constraints of the problem at any point of time.

#include <iostream>
using namespace std;

bool isSafe(int** arr, int i, int j, int n){
    if(i<n && j<n && arr[i][j]==1){
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int i, int j, int n, int** solArr){
    if(i==n-1 && j==n-1){
        solArr[i][j] = 1;
        return true;
    }

    if(isSafe(arr, i, j, n)){
        solArr[i][j] = 1;  
        if(ratinMaze(arr, i+1, j, n, solArr)){
            return true;
        }
        if(ratinMaze(arr, i, j+1, n, solArr)){
            return true;
        }
        solArr[i][j] = 0;
        return false;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++){                         // eg. 1 0 1 0 1
        for(int j=0; j<n; j++){                     //     1 1 1 1 1
            cin >> arr[i][j];                       //     0 1 0 1 0
        }                                           //     1 0 0 1 1
    }                                               //     1 1 1 0 1

    cout << endl;
    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;
        }
    }

    if(ratinMaze(arr, 0, 0, n, solArr)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

