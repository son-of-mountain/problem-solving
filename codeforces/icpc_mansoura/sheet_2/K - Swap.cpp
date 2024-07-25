#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    unsigned short n ; 
    cin >> n ;
     
    int t[n];
    for(int i = 0 ; i<n ; i++)
        cin >> t[i];
        
    swap( t[distance(t,min_element(t,t+n))] , t[distance(t,max_element(t,t+n))] );
    
    
    for(int i = 0 ; i<n ; i++)
        cout << t[i] << " " ;
}