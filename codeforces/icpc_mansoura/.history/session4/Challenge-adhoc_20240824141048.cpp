#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);


int main(){
    
    sonic ;

    int pre[10001];
    int arr[n];
    int n ; cin >> n ;

    for(int i=1; i<=n; i++){
        cin >> arr[i] ;
    }

    for(int i=1; i<n; i++){
        pre[i] = pre[i-1]+arr[i] ;
    }

    for(int i=0; i<n; i++){
        cout << pre[i] ;}









    return 0 ;
}