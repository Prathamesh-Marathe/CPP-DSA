// converting decimal into binary

#include <iostream>
#include <string>
using namespace std;

string convert(int n){
    int remainder;
    string num, binary;
    while(n!=0){
        remainder = n%2;
        string str = to_string(remainder);     //to_string used to convert an integer into string
        num += str;
        n /= 2;
    }
    for(int i=0; i<num.length()/2; i++){
        char temp = num[i];
        num[i] = num[num.length()-i-1];
        num[num.length()-i-1] = temp; 
    }
    return num;
}

int main(){
    int n;
    cin >> n;
    cout << convert(n);
    return 0;
}