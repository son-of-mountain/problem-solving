#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    string s; 
    cin >> s ;
    
    short i,l=s.length() ; 
    bool move=false,pal=true ; 
    
    for(i=0 ; i < l/2 ; i++)
        if(s[i] != s[l-1-i] ){
            s[i] = s[l-1-i] ; // changing the character

            move =true;
            break ; // we performed exaclty one move 
        
        }

    //we should discuss it when i==l/2 esp when l is odd
        
    if(move){
        for(i=0 ; i < l/2 ; i++)
            if(s[i] != s[l-1-i] ){
                cout << "NO";
                pal = false;
                return 0;
            }
        if(pal)
            cout << "YES";
            
    }
    else{
        // cout << l%2 << endl;
        if(!(l%2))
            cout << "NO";
        else
            cout << "YES" ; 
        
        return 0 ; 
    }
        
    //  "abcba"     =>      YES     because one change can make it pal
    //  abzba, abyba , abwba ....
    
    //  "abccba" => NO 
    // needs two changes like "abwwba" ... 
    
    
}