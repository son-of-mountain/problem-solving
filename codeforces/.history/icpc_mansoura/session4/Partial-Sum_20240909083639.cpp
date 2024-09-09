#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

     
    int v,n,q ; cin >> n >> q;

    int l,r; 
    int arr[n]={};

    int update[n];

    int val; 
    cin >> val;

    update[l] += val ; 
    update[r+1]-= val ;   

    for(int i=1; i<=n; i++){
        update[i] += update[i-1] ;
    }  

    

    return 0 ;
}
