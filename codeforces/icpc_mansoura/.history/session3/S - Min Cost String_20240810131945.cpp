#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    string s ; 
    cin >> s ;

    int cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];
    int mincost = INT_MAX ;
    char minstr = 'z' ;

    // approach
    // 1. for each character, if it is '?', calculate the cost of replacing it with all other characters
    // 2. keep track of the minimum cost and the corresponding character
    // 3. replace '?' with the character with the minimum cost
    // 4. repeat the above steps until all '?' are replaced with characters with minimum cost
    // i also took in consideration the min cost and min char if both characters are equal 

    for(int i=0; i<(int)s.size()-1; i++) {
        
        if(s[i]=='?'){
            
            mincost = min(mincost, abs( cost[s[i-1]-'a'] - cost[0] )) ; 
            
            minstr = min(minstr , char(97)) ; 

            for(int j=1; j< 26; j++){
                
                if(mincost <= min(mincost, abs( cost[s[i-1]-'a'] - cost[j] )) && minstr <= min(minstr , char(j+97)) ) 
                    s[i] = minstr ;
                
            } 
        }
    }

    cout << s ; 
    return 0 ;

}