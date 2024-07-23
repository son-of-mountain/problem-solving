#include <bits/stdc++.h>
using namespace std;

int main() {

    short t; 
    cin >> t ;
    while(t--){
        
        short n,m ;
        short i,j,k;
        cin >> n>> m ; 
             
        // BRUTE FORCE APPROACH
        // USE a min_difference to define the minimum difference between both strings
        // Introduce a difference each time we calculate it between two variables
        // Compare this difference with the min_difference
        // Take the min between both 

        //Why using an array to store the difference ?
        // Just compare and take min each time 
        // Less memory +
        // More intelligence ++
        
        //the subtraction operation itself implicitly converts the characters to their ASCII
            
        string s[n];
        for(i=0;i<n;i++)
                cin >> s[i] ; 
            

        int mindiff = INT_MAX; 
        for(i=0;i<n-1;i++){

            for(j=i+1; j<n;j++){

                int currdiff = 0 ;
            
                for(k=0; k<m;k++)
                    currdiff += abs( s[i][k] - s[j][k] );
            
                mindiff = min( mindiff . currdiff );
            }

        }
        cout << mindiff <<endl; 
    }
    
    return 0;    
    
}
