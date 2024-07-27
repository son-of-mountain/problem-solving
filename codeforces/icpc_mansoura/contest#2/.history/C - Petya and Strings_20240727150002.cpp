#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){

    // MY APPROACH WAS: 
    // CONVERT ALL THE Strings to lower 
    // then make comparisons 
    // and print the result 
    // but i think that it to much consuming to do this step 

    // didnt know if we can compare strings


    fastIO();    
    
    string s , t ;    
    cin >> t >> s ;
    
    int n = (int)t.length() ; 
    for(int i=0 ; i < n ; i++){
        if(isupper(t[i])) t[i] = tolower(t[i]);
        if(isupper(s[i])) s[i] = tolower(s[i]);
        
    }
    
    if(t>s) cout << 0 ;
    else if(t == s) cout << 1 ;
    else cout << -1 ;
    
    return 0;
    
}