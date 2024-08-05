// longest arithematic subarray
// Q). An aithematic array is an array that contain atleast two integers and the differences b/w consecutive integers are equal. For Ex. [9, 10], [3, 3, 3], [9, 7, 5, 3]
// are arithematic arrays. while [1, 3, 3, 7], [2, 1, 2] are not arithematic arrays.

// sarasvati has an array of N non-negative integers. the i'th integer of an array is A(i). she wants to choose a contiguous arithematic subarray from her array that has 
// maximum length 

// INPUT : the first line of the input gives the number of testcases T. T test cases follow. Each test case begins with a line containing the integer N. The second line
//         contains N integers. The i-th integer is A(i). 

// OUTPUT : For each test case, output onr line containing Case #x:y, where x is the test case number (starting from 1) and y is the length of the longest contiguous subarray

// CONSTRAINTS : Time limit = 20 sec per test case
//               memory limit = 1 GB
//               1 <= T <= 100
//               0 <= A(i) <=10^(9)
//               TEST SET 1:  2 <= N <= 2000
//               TEST SET 2:  2 <= N <= 2*10^(5) for at most 10 test cases.
//               for remianing cases, 2 <= N <= 2000

#include <iostream>
using namespace std;

int main(){
    int n, d1, d2, i=0, ans=2;
    int current_count = 2, previous_count = 2; 
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    while(i<n-2){
        previous_count = current_count;
        d1 = arr[i+1]-arr[i];
        d2 = arr[i+2]-arr[i+1];

        d1==d2 ? current_count++ : current_count=2;
        
        if(current_count> previous_count){
            ans = current_count;
        }
        i++;
    }
    cout << ans;
    return 0;
}

// ---> SUM OF LONGEST ARITHEMATIC SUBARRAY

// #include <iostream>
// using namespace std;

// int main(){
//     int n, d1, d2, result=0;
//     int current_count = 0, previous_count = 0; 
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<n-2; i++){
//         int sum = 0;
//         previous_count = current_count;
//         current_count = 0;
//         for(int j=i; j<n; j++){
//             d1 = arr[j+1]-arr[j];
//             d2 = arr[j+2]-arr[j+1];
//             if(d1==d2){
//                 current_count++;
//                 sum += arr[j];
//             }
//             else{
//                 current_count += 2;
//                 sum += arr[j] + arr[j+1];
//                 i = j;
//                 break;
//             }
//         }
//         if(current_count>previous_count){
//             result = sum;
//         }
//     }
//     cout << result;
//     return 0;
// }