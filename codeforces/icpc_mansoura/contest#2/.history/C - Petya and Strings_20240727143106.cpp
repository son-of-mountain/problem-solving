#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){

    //
       
    fastIO();    
    
    string s , t ;    
    cin >> t >> s ;
    
    for(int i=0 ; i < (int)t.length() ; i++){
        if(isupper(t[i])) t[i] = tolower(t[i]);
        if(isupper(s[i])) s[i] = tolower(s[i]);
        
    }
    
    // cout << t << endl << s << endl ; 
    
    // now that all caracters are low
    int su =0;
    for(int i =0 ; i< (int)t.length() ; i++)
        if(t[i]!=s[i]){
            su += ((int)t[i]-(int)s[i]);
            // cout << (int)t[i]-(int)s[i] << endl ;
        }
        
    
    
    
    // cout << su << endl ;
    
    if(su==0) cout << 0 ;
    else if(su>0) cout << 1 ;
    else cout << -1 ;
    
    
    return 0;
    
}