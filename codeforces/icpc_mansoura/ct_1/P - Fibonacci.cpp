#include<bits/stdc++.h>
using namespace std; 
int main(){
    
    int n ; 
    
    cin >> n ;
    
    unsigned long long f[n];
    
    f[1]=0;
    
    f[2]=1;
    
    for(int i = 3 ; i <= n ; i++)
        f[i] = f[i-1] + f[i-2] ;
    
    cout << f[n];
    
    
    
    
}