#include <bits/stdc++.h>
using namespace std ; 
#define ll long long
#define f(n) for(int x=0 ; x<= n ; x++)
#define ff(n) for(int y=0 ; y<= n ; y++)
#define fff(n) for(int z=0 ; z<= n ; z++)

int main(){
        
    int k , s ;
    cin >> k >> s ;
    
    int ct = 0; 
    // maximum value 
        f(k)
            ff(k){
                int z =s - x - y ;
                if(z>=0 && z<=k)
                    ct++ ;
            }
                
            
    cout << ct ; 
    


    }
}

