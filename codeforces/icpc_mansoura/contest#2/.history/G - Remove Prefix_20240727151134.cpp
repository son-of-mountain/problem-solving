#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// APPROACH
// Was the same as last exo but i didnt work bea
int main(){
    
    fastIO();    
    
    int t ; 
    cin >> t; 
    
    while(t--){
        
        int n;
        cin >> n ; 
        
        int a[n];
        for(int i=0 ; i< n ;i++)
            cin >> a[i];
                
        sort(a , a+n); 
        
        int start = 0 ;
        bool isn  = false  ; 
        
        while(!isn){
            isn  = true ;
            for(int i=start ; i< n-1 ;i++)
                if(a[i]==a[i+1]){
                    isn=false ;
                    break ; 
                }
            // cout << a[i] << endl ; 
            start++ ; 
            
        }
            
        cout << start-1 << endl ;         
    }
    
    
    return 0;
    
}