#include <bits/stdc++.h>
using namespace std ; 

int main(){

// they approached with a less memory consuming solution
// but still as my logic 

    int n ;
    cin >> n ;

    int shift = 1000;
    int frq[2000+5]={} ;
    int arr[n];


    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
        
        frq [ arr[i] + shift]++ ; 

    }







}

