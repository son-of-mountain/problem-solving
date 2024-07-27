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
                ct++ ; 
        }

        int ans=0 ; 

        for(int i=0 ; i< n ; i++){
            
            frq[arr[i]]-- ; // it is removed so just decrement  


            if(frq[arr[i]] > 0) // if it is still 
                ct++ ; 
            
            ans++ ; 
        
        }






    }
    
    
    return 0;
    
}