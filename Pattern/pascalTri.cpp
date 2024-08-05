#include <iostream>
using namespace std;

int factorial(int n){         //using recursion here may lead to stack overflow for larger values of n
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int NCR(int n, int r){
    int ncr = factorial(n)/(factorial(n-r)*factorial(r));
    return ncr;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << NCR(i, j) <<" ";
        }
        cout << endl;
    }
    return 0;
}