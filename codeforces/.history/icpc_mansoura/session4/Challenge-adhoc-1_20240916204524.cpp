#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);


int main(){
    
    sonic ;

    int pre[100001];
    int arr[100001];
    int n ; cin >> n ;

    for(int i=1; i<=n; i++){
        cin >> arr[i] ;
    }

    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+arr[i] ;
    }
    
    int q ; cin >> q ;
    while(q--){
        int l,r ; cin >> l >> r;

        cout << pre[r]-pre[l-1];
    }

    return 0 ;
}