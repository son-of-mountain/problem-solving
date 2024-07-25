#include<bits/stdc++.h>
using namespace std ; 

int main(){
    
    int n ; 
    cin >> n;
    
    int t[n];
    int i;
    for(i = 0 ; i<n ; i++)
        cin >> t[i];
        
    sort(t, t+n);
    
    for(i = 0 ; i < n/2 ; i++)
        cout << t[i] << " ";
    for(i = (n/2) - 1 ; i >= 0 ; i--)
        cout << t[i] << " ";
    cout << endl ; 
    
    for(i = n-1 ; i >= n/2 ; i--)
        cout << t[i] << " ";
    for(i = n/2 ; i < n ; i++)
        cout << t[i] << " ";
    
    
    
}