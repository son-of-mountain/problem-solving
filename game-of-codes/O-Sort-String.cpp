#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,i,j ; 
    // string s;
    
    cin >> n ; 
    // cin >> s ;
    
    int frq[26] = {};
    char c ;
    
    for(i=0 ; i < n ; ++i){
        cin >> c ; 
        frq[ c - 'a' ]++; 
    }
    
    for(i = 0 ; i < 26 ; ++i){
        for(j = 1 ; j <= frq[i] ; ++j)
            cout << char(i+97);
            
    }
    
    
}
