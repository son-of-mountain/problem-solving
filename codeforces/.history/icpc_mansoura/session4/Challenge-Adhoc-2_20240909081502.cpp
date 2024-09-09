#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

     
    int v,n,q ; cin >> n >> q;

    int k ; 
    int arr[n];
    for(int i=1 ; i <= n ; i++)
        cin >> arr[i] ; 


    while(q--){
        cin >> v >> k; 
        for(int i=k ; i <= n ; i++)
            cout << arr[i]+ v<< " "; 
    }


    return 0 ;
}
