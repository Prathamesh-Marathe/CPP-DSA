// Binary Addition

#include <bits/stdc++.h>
using namespace std;

// Function to perform binary addition
string perform_Addition(string ans, string result, int length, int carry, string a, string b){
    for(int i=0; i<length; i++){
        int m = a[a.length()-i-1]-'0';      // converting elements into an integer starting from last element
        int n = b[b.length()-i-1]-'0';
        
        if(m==1 && n==1 && carry==1){                                                      // in binary addition :   a  b  sum  carry
            result = '1';   carry = 1;                                                     //                        0  0   0    0
        }                                                                                  //                        0  1   1    0
        else if((m==1 && n==1) || (m==1 && carry==1) || (n==1 && carry==1)){               //                        1  0   1    0
            result = '0';   carry = 1;                                                     //                        1  1   0    1
        }
        else if((m==0 && n==0) || (m==0 && carry==0) || (n==0 && carry==0)){
            result = '1';   carry = 0;
        }
        else{ 
            result = '0';   carry = 0;
        }

        if(i==length-1){
            ans += result + to_string(carry);
        }
        else{
            ans += result;
        }
    }
    return ans;
}

// Function to get final answer
string binAddition(string a, string b){
    string ans, result;
    int carry = 0;
    int length = max(a.length(), b.length());

    perform_Addition(ans, result, length, carry, a, b);

    string finalAns;
    for(int i=ans.length()-1; i>=0; i--){                          // reversing a ans to get final answer
        finalAns += ans[i];                                        // as ans obtain is in reverse manner
    }
    return finalAns;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << binAddition(a, b);
    return 0;
}