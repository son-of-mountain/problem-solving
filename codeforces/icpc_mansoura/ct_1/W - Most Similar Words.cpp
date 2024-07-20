#include <bits/stdc++.h>
using namespace std;

int main() {

    short t; 
    cin >> t ;
    while(t--){
        
        short n,m ;
        cin >> n>> m ; 
        
        string s[n];
        for(int i=0;i<n;i++)
                cin >> s[i] ; 
            
        int moves[n*n]={0};
        int iter=0;
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++){

                moves[iter++] += abs( (int)s[i][j] ) ; 
                
                
                
                
                
            }
            
        cout << *min_element(moves, moves+iter) <<endl ;
        
        
    }
    
    
    
}
