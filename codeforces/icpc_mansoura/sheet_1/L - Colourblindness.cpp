#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    unsigned short t ; 
    cin >> t ;

    while(t--){
        unsigned short n ; 
        cin >> n ;
        
        char color1[n],color2[n];
        int i ;
        
        for(i =0 ; i< n ; i++)
            cin >> color1[i] ;
        
        for(i =0 ; i< n ; i++)
            cin >> color2[i] ;
            
        for(i = 0 ; i< n ; i++){
            
            if( color1[i]==color2[i] || (color1[i]=='G' && color2[i]=='B')|| (color1[i]=='B' && color2[i]=='G'))
                continue ;         
            else{
                cout << "NO" <<endl;
                break ;
            }
        }
        
        if(i==n)        // i added a condition before saying 'YES'
            cout << "YES" << endl ;     // it should parse all the string
        
        
    }
     


    
}