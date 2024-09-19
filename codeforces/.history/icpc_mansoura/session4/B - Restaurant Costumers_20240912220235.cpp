#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    Prefix sum : 
    - For each update, we increment or decrement the corresponding index in the prefix sum array.
*/

int main(){
    
    sonic ;
    int n ; cin >> n ; 
    long long updates[100001]={};
    const int N = 10001;

    while(n--){
        int l,r ; cin >> l >> r; 

        updates[l]++;
        updates[r+1]--;
    }

    for(int i=1 ; i <= N ; i++){
        updates[i] += updates[i-1];
    }

    long long ans = 0 ; 
    for(int i=1 ; i <= N ; i++){
        ans = max(ans , updates[i]);
    }

    cout << ans ;
    
    return 0 ;
}