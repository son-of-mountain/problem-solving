#include<bits/stdc++.h>
using namespace std ;

void fastIO(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main(){
    
    fastIO();    
    
    int t ; 
    cin >> t; 
    
    // APPROACH 
    // i found a formula instead of a brute force
    // what is it? 

    // first 
    // if a % b     then we have none to do 
    // 



    while(t--){
        int a , b; 
        cin >> a >> b; 
        
        if(a%b==0)
            cout << 0 << endl; 
            
        else if (b>a)
            cout << (b-a) << endl;
            
        else{
            int i=0;
             i= b*(a/b + 1) - a ; 
            cout << i << endl; 
            
        }
        
        
        
    }
    
    
    return 0;
    
}