#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    string s ; 
    cin >> s ;

    int cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];
    int mincost = INT_MAX ;
    char minstr ="z" ;

    for(int i=0; i<(int)s.size(); i++) {
        if(s[i]=='?'){
            mincost = min(mincost, abs( cost[s[i-1]-'a'] - cost[0] )) ; 
            minstr = min(minstr , char(97)) ; 
            for(int j=1; j< 26; j++){
                
                if(mincost <= min(mincost, abs( cost[s[i-1]-'a'] - cost[j] ))
                && minstr <= min(minstr , char(j)) ) 
                
                    s[i] = 
                
            } 
        }
    }

}