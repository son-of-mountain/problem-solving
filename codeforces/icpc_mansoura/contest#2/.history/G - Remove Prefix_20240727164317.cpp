#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// APPROACH
// Was the same as last exo but i didnt work because it may run on some problems


// VALID APPROACH 
// Go through all the array to check for FRQ 
// If FRQ found >1 just decrement and count the decrementation 
// Print the decrementation 

int main(){
    
    fastIO();    
    
    int t ; 
    cin >> t; 
    
    while(t--){
        
        int n;
        cin >> n ; 

        const int sz = 2e5+10 ;
        int frq[sz] = {} ;

        int arr[n] ;

        int ct=0 ; 
        for(int i=0 ; i< n ; i++){
            cin >> arr[i];
            frq[arr[i]]++ ; 

            if(frq[arr[i]] > 1)
                ct++ ; // ct means how many numbers are repeated  
        }

        int ans=0 ; 

        for(int i=0 ; i< n ; i++){
            
            // if there s no repeated numbers then 


            frq[arr[i]]-- ; // it is removed so just decrement  


            if(frq[arr[i]] > 0){ // if it is still =>1 means that still there are occr
                ct-- ; 
                ans++ ; }
            
        
        }

        cout << ans ; 





    }
    
    
    return 0;
    
}