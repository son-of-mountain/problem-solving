#include<bits/stdc++.h>
using namespace std ;


int main(){
    
    int n , i ;
    
    cin >> n;
    
    int a[n];
    
    //Approach 
    // just calculate th esu


    for( i =0 ; i<n ; i++)
        cin >> a[i];
    
    i=0 ;
    long long s1,s2;
    for( i =0 ; i<n ; i+=2)
        s1 += a[i];
    for( i =1 ; i<n ; i+=2)
        s2 += a[i];

    if(s1==s2) cout << "Equal";
    
    else
        cout << ((s1>s2)? "Odd" : "Even") ; 
        
    
    return 0;
    
}