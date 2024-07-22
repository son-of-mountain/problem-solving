#include <bits/stdc++.h>
using namespace std;

int main() {

    short t; 
    cin >> t ;
    while(t--){
        
        short n,m ;
        short i,j;
        cin >> n>> m ; 
        
        // --------------- APPROACH ---------------
        // Input of the all the words 
        // Calculate the sum of the ASCII code of all characters in each word 
        // Then calculate the difference of the possible two pairs
        // Take the smaller difference and print it 

        string s[n];
        for(i=0;i<n;i++)
                cin >> s[i] ; 
            
        int sum[n];
        for(i=0;i<n;i++)
            for(j=0;i<m;j++)
                sum[i] += (int)s[i][j];

        int diff = abs(sum[0]-sum[1]);
        for(i=0;i<n-1;i++)
            for(j=i; j<n;j++){
                if(diff < abs(sum[i]-sum[j]))
                    diff = abs(sum[i]-sum[j]);
                
            }
        
        
        cout << diff <<endl; 
        
        
        
                
        
    }
    
    
    
}
