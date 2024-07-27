#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){
    
    fastIO();    
    
    int t ; 
    cin >> t; 
    
    while(t--){
        
        int n;
        cin >> n ;  

        // APPROACH 
        // sort the array
        // suppose that it is already NICE 
        // once you found otherwise you break and says 'NO'

        int a[n];
        for(int i=0 ; i< n ;i++)
            cin >> a[i];
                
        sort(a , a+n); 
        
        bool isn = true ; 
        
        for(int i=0 ; i< n-1 ;i++)
            if(a[i]==a[i+1]){
                cout << "NO"<<endl; 
                isn=false ;
                break ; 
            }
             
        if(isn) cout << "YES"<< endl ; 
        
    }
    
    
    return 0;
    
}