#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// APPROACH
// SHOULD RESPECT THE ORDER 
// d

int main(){
    
    fastIO();    
    
    string s , t="" , h = "heidi" ;
    cin >> s ; 
    bool is_heidi = false ;
    
    
    for(int i=0 ; i < (int)s.size() ; i++ )
    {

        if( s[i]== 'h' && t=="" || s[i]== 'e' && t==h.substr(0,1) || s[i]== 'i' && (t==h.substr(0,2) || t==h.substr(0,4)) || s[i]== 'd' && t==h.substr(0,3))
            t += s[i];
            
        if(t == "heidi"){
            is_heidi = true ; 
            break ; 
        }
    }
    
    // cout << t ;
    
    if(is_heidi)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
    
}