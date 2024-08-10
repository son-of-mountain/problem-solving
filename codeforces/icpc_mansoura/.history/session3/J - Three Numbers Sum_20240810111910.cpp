#include <bits/stdc++.h>
using namespace std ; 
#define ll long long
#define f(n) for(int x=1 ; x<= n ; x++)
#define ff(n) for(int j=1 ; j<= n ; j++)
#define fff(n) for(int l=1 ; l<= n ; l++)

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

