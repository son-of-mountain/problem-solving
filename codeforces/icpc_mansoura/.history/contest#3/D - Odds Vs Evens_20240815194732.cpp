#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define ll long long

int main(){
    
    sonic ;

    ll s1=0 , s2=0 ;
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
    
    for(int i = 0 ; i < n ; i+=2) s1+=arr[i] ; // those are odds since the index is i+1
    for(int i = 1 ; i < n ; i+=2) s2+=arr[i] ;
    
    if(s1>s2) cout << "Odd" ;
    else if(s1<s2) cout << "Even" ;
    else cout << "Equal"; 


    return 0 ;

}