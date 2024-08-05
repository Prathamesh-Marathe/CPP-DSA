#include <bits/stdc++.h>
using namespace std;

int convert(string str) {
   int sum = 0, a;
    for(int i = 0; i < str.length(); i++) {
        if(str[i]>='A' && str[i]<='F'){         // in hexadecimal 10 = A, 11 = B, 12 = C, _ _ _ , 15 = F
            a = str[i]-'0'-7;                   // converting representative alphabet into its corresponding decimal equivalent
        }
        else{
            a = str[i]-'0';
        }
        int n = a * pow(16, str.length() - 1 - i);
        sum += n;
    }
    return sum;
}

int main() {
    string str;
    cin >> str;
    cout << convert(str);
    return 0;
}
