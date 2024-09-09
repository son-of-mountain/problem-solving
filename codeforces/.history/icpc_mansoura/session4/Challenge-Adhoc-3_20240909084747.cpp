#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

     
    int v,n,q ; cin >> n >> q;

    int l,r; 
    int arr[n]={};
    int arr[n]={};
    for(int i=1 ; i <= n ; i++)
        cin >> arr[i] ; 

/*
    while(q--){
        cin >> v >> l >> r; 
        for(int i=l ; i <= r ; i++)
            arr[i] += v ;
        
        for(int i=1 ; i<=n ; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

*/
    // another method using the partial sum 
    while(q--){
        cin >> v >> k >> r; 
    }

    


    return 0 ;
}
