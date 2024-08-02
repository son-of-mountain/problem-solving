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
        frq[ t[i]+shift ]++ ; // we store 1001   1002    1002    999     1003    1003 
    }

    for(int a=1 ; a<=1000 ;a++){
        for(int i=0 ; i<n ;i++){

            if( frq[ t[i]+])

        }
        
    }








}

