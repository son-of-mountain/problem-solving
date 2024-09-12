#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    why Prefix sum ? 
    suppose we have an array of size n.
    prefix sum array will contain the sum of elements from index 0 to i.
    This way, we can find the sum of elements in any subarray from index l to r in O(1) time. 

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