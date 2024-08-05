// converting binary to dicimal

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int convert(string str) {
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        int a = str[i] - '0';                       // Converting character of a string into an integer
        int n = a * pow(2, str.length() - 1 - i);
        sum += n;
    }
    return sum;
}

// int convert(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 2;
//         n /= 10;
//     }
//     return ans;
// }

int main() {
    string str;
    cin >> str;
    int result = convert(str);
    cout << result;
    return 0;
}
