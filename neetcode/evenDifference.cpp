// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n , l , r ,k , sum=0 , ms = 0 , ml = 0; 
    cin >> n ; 
    
    int arr[n];
    for(int i= 0 ; i < n ; ++i)
        cin >> arr[i];
        
    int pre[n];
        
    // loop for length variation
    for(k = 2 ; k <= n ; ++k){
        for(int l = 1, r=k ; r <= n ; ++l , ++r ){
            //before sorting we need to store the elements in a new array
            for(int i = l ; i <= r ; ++i )
                pre[i] = arr[i];
            // pre now contains [ 2 , 4 , 1 , 7]
            //lets sort the array
             sort(pre + l , pre + r );
             
             // calculate the sum
             sum += pre[l-1] - pre[l];
             
             ms = INT_MAX; //ms for maximum even sum
             if(sum%2==0 && sum>ms){ // sum should be even and > ms
                ms = sum ; 
                ml = k ; // max length for the current k 
             
             }
        }
    }
    
    return ml ; 
    
}
