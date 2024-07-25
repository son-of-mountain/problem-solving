#include<bits/stdc++.h>
using namespace std ;

#define ll long long

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){
    
    fastIO();
    
    // APPROACH : Brute Force 
    // Go through ALL elements and check if they make a palindrome or not 
    /// Got TKE at 205


    string s;
    cin >> s ;
    ll ss= s.size();
    
    int q;
    cin >> q;
    
    while(q--){
        
        ll l , r  ; 
        cin >> l >> r ; 
        
        bool pal = true ;
        
        // cout << l-1 << " " << l + (r-l)/2 <<  " " ; 
        
        for(ll i=l-1 ; i< l + (r-l)/2 ; i++){
        
            if( s[i] != s[r+l-2-i] ){
                pal=false ; 
        
                // cout << pal << " " << i << " " << r+l-2-i << " " <<s[i] << " =? " << s[r+l-2-i] << " " ; 

                cout << "NO\n";

                break ; 
            }
            
        }
            
        
            
        if(pal)
    
            // cout << s[l-1] << s[l]<< " "<< s[r-1] <<s[r] << " " ;
    
            cout << "YES\n" ; 
        
        
        
    }
    return 0 ; 
        
}