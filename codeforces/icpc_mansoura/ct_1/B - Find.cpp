#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    int n ,x ;
    cin >> n >> x; 
    
    int t[n];
    for(int i = 0 ; i < n ; i++)
        cin >> t[i];
        
    for(int i=0 ; i < n ; i++)
        if(x == t[i]){
            cout << i;
            return 0;
        }
    
    
    cout << "Not Found" ;
}