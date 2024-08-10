#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    string s ; 
    cin >> s ;

    int cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];
    int mincost = INT_MAX ;
    string minstr ="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz" ;

    for(int i=0; i<(int)s.size(); i++) {
        if(s[i]=='?'){
            mincost = min(mincost, abs( cost[s[i-1]-'a'] - cost[0] )) ; 
            minstr = min(, abs( cost[s[i-1]-'a'] - cost[0] )) ; 
            for(int j=1; j< 26; j++){
                
            } 
        }
    }

}