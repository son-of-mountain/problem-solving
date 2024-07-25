#include<bits/stdc++.h>
using namespace std ; 

int main(){
    
    int n , q; 
    cin >> n >> q;
    
    int t[n];
    int i ;
    for( i = 1 ; i <= n ; i++)
        cin >> t[i] ;
        
    while(q--){
        
        int l , r , x ;
        int count = 0 ;
        cin >> l >> r >> x ;
        
        for(int j =l ; j <= r ; j++)
            if(x == t[j])   count++ ; 
        
        cout << count << endl ; 
    }
    
    
}