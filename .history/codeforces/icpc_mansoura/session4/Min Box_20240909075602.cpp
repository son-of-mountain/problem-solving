#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

    long long pre[100001]={};
     
    int n,k ; cin >> n >> k;
    int arr[n];
    for(int i=1 ; i <= n ; i++)
        cin >> arr[i] ; 

    // calculate the elements of pre using the range and loop determined
    // and then store them in the pre array

    for(int i=1 ; i <= n ; i++){
        pre[i] = pre[i-1] + arr[i];
    }

    ans = pre[r]-pre[l-1]


    return 0 ;
}
