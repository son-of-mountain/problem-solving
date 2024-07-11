#include <iostream>
#include <math.h>
using namespace std ;

int main(){
    
    int t ; 
    
    cin >> t ;
    
    while(t--){
          
        long long n,m ;
        cin >> n >> m ;
        
        long long sum = n*(n+1)/2 ; // thing of a math formula 
        
        long long y = 0;    // y is the sum of the power
        
        for(long long i=1 ; i <= n ; i*=m)  
            y += i;
            
        
        long long ans = sum-y-y ;  
        
          cout << ans <<endl; 
        }
        
    }

