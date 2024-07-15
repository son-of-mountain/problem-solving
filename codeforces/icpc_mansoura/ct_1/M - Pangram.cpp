#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    unsigned short n ; 
    cin >> n ;

    char sen[n]; 
    for(unsigned int i = 0 ; i<n ; i++){
        char s ; 
        cin >> s ;
        sen[i] = tolower(s) ;
        
    }
    
    
    if(n<26){
        cout << "NO" ; 
        return 0 ;
    }
        
    else{
        
        // every alphabet should appear at least once 
        
        // if it doesnt then should alert , but how to know this ? 
        
        unsigned int ct= 0;
        for(char i = 'a' ; i<= 'z' ; i++)
            for(int j = 0 ; j<n ; j++)
                if(i == sen[j]){
                    ct++ ;
                    break;
                }        
                
                
                
        if(ct == 26)
            cout << "YES";
        
        else
            cout << "NO" ; 
            
        
        
    }
    
    
}