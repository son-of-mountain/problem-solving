#include<bits/stdc++.h>
using namespace std; 

int main(){
    

    unsigned int t ; 
    cin >> t ;
    while(t--){
        
        int n ; 
        cin >> n ;
        
        char s[n] ;
        for(int i = 0; i< n ; i++)
            cin >> s[i];
            
        int ct = 2 ;
        
        // brute force technique
        int i , j ;
        
        for(i = 1; i< n ; i++){
            for(j = 0 ; j < i ; j++){
                
                    // cout << ct << endl ; 
                    if(s[i]==s[j])
                    {
                        ct++;
                        break ;
                        
                    }
                    
                
                }
            
            if(j==i)
                ct+=2 ; 
             
            
        }
        cout << ct << endl ; 
        
            }
            
        
            
            
        
        
    }
    
    
