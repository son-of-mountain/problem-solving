#include <bits/stdc++.h>
using namespace std ; 
#define ll long long
#define f(n) for(int x=0 ; x<= n ; x++)
#define ff(n) for(int y=0 ; y<= n ; y++)
#define fff(n) for(int z=0 ; z<= n ; z++)

int main(){

    // APPROACH 
    // we will generate all possible pairs of (x,y) such that 0<=x,y<=k and their sum equals s
    // and then check for each pair if z=s-x-y exists in the range [0,k]
    // complexity will be O(k^2)
    
    // APPROACH 2
    // instead of generating all pairs, we can iterate through all possible values of x and y
    // and for each x, check if z=s-x exists in the range [0,k]
    // complexity will be O(k^2)
    
    // APPROACH 3
    // we can use a binary search to find the number of z that satisfies the condition
    // complexity will be O(k log k)
    
    // APPROACH 4
    // we can use a segment tree or a binary indexed tree to count the number of z that satisfy the condition
    // complexity will be O(k log k
        
    int k , s ;
    cin >> k >> s ;
    
    int ct = 0; 
    // maximum value 
        f(k)
            ff(k){
                int z =s - x - y ;
                // lets say that the condition on z is true
                // then this number should exist ===> 0≤ Z ≤K
                if(z>=0 && z<=k)
                    ct++ ;
            }
                
            
    cout << ct ; 
    return 0 ; 


    }

