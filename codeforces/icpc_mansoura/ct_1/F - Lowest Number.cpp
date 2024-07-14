#include<bits/stdc++.h>
using namespace std ; 

int main(){
    
    int n ; 
    cin >> n;
    
    int t[n];
    int i; 
    for(int i = 0 ; i < n ; i++)
        cin >> t[i]; 
        
    int min = *min_element(t , t+n);
    cout << min << " " ;
    for(i = 0 ; i < n ; i++)
        if(min == t[i])
        {
            cout << i+1 ; 
            return 0 ;
        }    
    
}