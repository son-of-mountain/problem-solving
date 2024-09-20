#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37

/*
    approach : 
        STOP FORGETTING THE PREINCREMENT THING 
    goal : 
        look for the max number result of a range given
*/

int main(){
    
    sonic ;

    int n,k,l,r; cin >> n >> k ;
    long long pre[10001]={};

    int arr[n];
    for(int i=1;i<=n;++i) cin >> arr[i];

    for(int i=1;i<=n;++i)   pre[i] += pre[i-1]+arr[i];
    
    long long ans = 0;

    for(l=1,r=k ; r<= n ; ++l , ++r){
        ans = max(ans,pre[r]-pre[l-1]);
    }

    cout << ans ;       
f
    return 0 ;
}