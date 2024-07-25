#include<bits/stdc++.h>
using namespace std ;


int main(){
    
    short n ;
    
    cin >> n;
    
    short p[n];
    float s =0 ; 
    
    for(short i =0 ; i<n ; i++)
        cin >> p[i];
    
    for(short i =0 ; i<n ; i++)
        s += p[i] ;
        
    cout << fixed <<  setprecision(13) << (float)(s/n) ; 
    
}