// Q). Isyana is given the No.of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V(i). A day is record beaking if it 
//     satisfies the following conditions.
//     1] The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
//     2] Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
//     NOTE : the first day could be a record breaking day.

// INPUT : the first line of the input gives the number of testcases T. T test cases follow. Each test case begins with a line containing the integer N. The second line
//         contains N integers. The i-th integer is V(i). 

// OUTPUT : For each test case, output one line containing Case #x:y, where x is the test case number (starting from 1) and y is the No.of record breaking days.

// CONSTRAINTS : Time limit = 20 sec per test case
//               memory limit = 1 GB
//               1 <= T <= 100
//               0 <= V(i) <=2 * 10^(5)
//               TEST SET 1:  2 <= N <= 1000
//               TEST SET 2:  2 <= N <= 2*10^(5) for at most 10 test cases.
//     For remaining cases, 1 <= N <= 1000

#include <iostream>
using namespace std;

int main(){
    int n, count=0, i=0;
    cin >> n;
    int arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maximum = -1;
    while(i<n){
        if(arr[i]>maximum && arr[i]>arr[i+1]){
            count++;
        }
        maximum = max(maximum, arr[i]);
        i++;
    }
    cout << count;
    return 0;
}