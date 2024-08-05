// print numbers in increasing and decreasing order

#include <iostream>
using namespace std;

int ascending(int n){
    if(n==1)
        return n;
    cout << ascending(n-1) << " ";
    return n;
}

void decending(int n){
    if(n==0)
        return;
    cout << n << " ";
    decending(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << ascending(n) << " " << endl;
    decending(n);
    return 0;
}