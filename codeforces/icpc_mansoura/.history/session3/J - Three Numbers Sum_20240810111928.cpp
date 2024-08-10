#include <bits/stdc++.h>
using namespace std ; 
#define ll long long
#define f(n) for(int x=1 ; x<= n ; x++)
#define ff(n) for(int y=1 ; y<= n ; y++)
#define fff(n) for(int z=1 ; z<= n ; z++)

int main(){
        
    int k , s ;
    cin >> k >> s ;
    
    int ct = 0; 
    // maximum value 
        f(k)
            ff(k){
                int z =s - i - j ;
                if(z>=0 && z<=k)
                    ct++ ;
            }
                
    }
            
    cout << ct ; 
    


}

