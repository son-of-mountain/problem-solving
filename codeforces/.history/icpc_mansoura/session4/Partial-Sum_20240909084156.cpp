#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

     
    int n ; cin >> n ;

    int l,r;  cin >> l >> r; 
    int arr[n]={};

    int update[n];

    int val; 
    cin >> val;

    update[l] += val ; 
    update[r+1]-= val ;   

    for(int i=1; i<=n; i++){
        update[i] += update[i-1] ;
    }  
    for(int i=1; i<=n; i++){
        arr[i] += update[i];
    }  

    /*
        5 
        1 4  => ( 4 5 12 7 6)
        2
        2 3 10 5 6

        4 3 10 5 6
        4 3 10 3 4
        

        4 12 22 3 4


    
    */


    return 0 ;
}
