#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

// inverted half pyramid
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(j<=i){
                cout << "* ";
            }
        }
        cout << endl;
    }

// inverted half pyramid after 180deg rotation
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){        //for(int j=0; j<n; j++)
            if(j<=i){                     //if(j<n-i-1)
                cout << "*";              //cout << " ";
            }
            else{
                cout << " ";              //cout << "*";
            }
        }
        cout << endl;
    }

// half pyramid using numbers   
    for(int i=0; i<n; i++){                          // 1
        for(int j=0; j<=i; j++){                     // 2 2
            cout << i+1 << " ";                      // 3 3 3
        }                                            // 4 4 4 4
        cout << endl;                                // 5 5 5 5 5
    }

// Floyd's Triangle
    int m=1;                                         // 1
    for(int i=0; i<n; i++){                          // 2 3
        for(int j=0; j<=i; j++){                     // 4 5 6
            cout << m << " ";                        // 7 8 9 10
            m++;                                     // 11 12 13 14 15
        }
        cout << endl;
    }

// Butterfly Pattern (METHOD 1)
    for(int i=0; i<2*n; i++){                           
        for(int j=0; j<2*n; j++){                       
           if(i<=n){                                    
                if(j<=i || j>=2*n-i-1){               
                    cout << "* ";                       
                }                                       
                else{                                   
                    cout << "  ";
                }   
            }
            else{
                if(j>=i || j<2*n-i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

//Butterfly Pattern (METHOD 2)
    for(int i=1; i<=n; i++){                                    //total rows = 2*n;    total columns = 2*n  
        for(int j=1; j<=i; j++){                                //in upper half, * = no.of rows (at starting and ending)
            cout << "* ";                                       //               _ = 2*n-2*rows
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i=n; i>=1; i--){                                    // for lower half
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}