#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    string s ; 
    cin >> s ;

    int cost[26];
    for(int i=0; i<26; i++) cin >> cost[i];

    // approach
    // 1. for each character, if it is '?', calculate the cost of replacing it with all other characters
    // 2. keep track of the minimum cost and the corresponding character
    // 3. replace '?' with the character with the minimum cost
    // 4. repeat the above steps until all '?' are replaced with characters with minimum cost
    // i also took in consideration the min cost and min char if both characters are equal 

        /*
        abc??def?gh
        4 9 5 9 e6 f1 g0 3 7 2 5 9 6 1 3 2 3 2 9 1 1 0 1 8 8 4

        25
        abcbbdeffgh
        */

    int n = s.length() ;
    for(int i=0; i<n ; i++) {
        
        // int mincost = INT_MAX ;          this is false since we want to operate each case where string == ?
        // char minChar = 'a' ;
        
        if(s[i]=='?'){
            int mincost = INT_MAX ; 
            char minChar = 'a' ;

            for(int j=0 ; j <26 ; j++) {
            
                char c = 'a'+ j ; // this char iterates over all the 26 characters in cost[]
                int currCost = 0 ; // this is the cost of each character , the comparison is based on this one
                
                // first check if previous character exists and not equal to '?
                if( i> 0 && s[i-1] !='?')
                    currCost += abs( cost[s[i-1]-'a'] - cost[c-'a'] );
                
                // and check if next character exists and not equal to '?
                if( i<n-1 && s[i+1] !='?')
                    currCost += abs( cost[s[i+1]-'a'] - cost[c-'a'] );
                
                // then we have the cost of each character that we calculated before and after


                // now checks the cost and lexicographic comparison
                if(currCost <= mincost && c <minChar ) {
                    mincost = currCost ;
                    minChar = c ;
                }

                
            }
            s[i] = minChar ;  // replace '?' with the character with the minimum cost
            // its either the first character 'a'
            // or the convenient character we found
        }
    }

    long long totalCost = 0 ;
    for(int i=0; i< n-1; i++) totalCost += abs( cost[s[i]-'a'] - cost[s[i+1]-'a'] );

    std::cout << totalCost << '\n' << s ; 
    return 0 ;

}