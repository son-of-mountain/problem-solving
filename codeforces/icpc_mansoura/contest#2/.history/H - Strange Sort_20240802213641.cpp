#include <bits/stdc++.h>
using namespace std ; 

int main(){

// they approached with a less memory consuming solution
// but still as my logic 

    int n ;
    cin >> n ;

    int shift = 1000;
    int frq[2000+5]={} ;
    int t[n];

    for(int i=0 ; i<n ;i++){
        cin >> t[i];    // 1 2 2 -1 3 3     0 1 2 3 4 5 
        frq[ t[i]+shift ]++ ; // we store 1001=1  1002    1002=2    999=1     1003    1003=2 
    }

    for(int a=1 ; a<=1000 ;a++){
        for(int i=0 ; i<n ;i++){

            if( frq[ t[i]+shift ]== a)
                cout << t[i] << " " ;   // the variable here is t[i] so even if frq[1003]=2 that actually means in this case
                // there are 2 numbers t[] and 1003 in the array t[]

        }
        
    }








}

