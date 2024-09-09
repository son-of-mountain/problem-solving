#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

    long long pre[100001]={};
    int arr[100001]={}; 
    int n,k ; cin >> n >> k;

    for(int i=1 ; i <= n ; i++){
        cin >> arr[i] ; 

    // calculate the elements of pre using the range and loop determined
    // and then store them in the pre array

    for(int i=1 ; i <= n ; i++){

    }


    long long maxsub = 0;
    maxsub = *max_element(pre, pre+n-k);

    cout << maxsub ;
    
    return 0 ;
}
