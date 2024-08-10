#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    string s ; 
    cin >> s ;

    int cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];
    int mincost = INT_MAX ;
    string minstr ="" ;

    for(int i=0; i<(int)s.size(); i++) {
        if(s[i]=='?'){
            mincost = min(mincost,abs( cost[s[i-1]-'a'] - cost[i-1] ))
            for(int j=0; j< 26; j++){
                
            } 
        }
    }

}