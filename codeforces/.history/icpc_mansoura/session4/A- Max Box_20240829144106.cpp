#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);


int main(){
    
    sonic ;

    int pre[100001]={};
    int arr[100001]={};
    int n,k ; cin >> n >> k;

    for(int i=0; i<n ; i++)
        cin >> arr[i] ; 

    // calculate the elelmets of pre using the range and loop determined 

    for(int i=0; i< n-k ; i++ ){
        pre[i] = arr[i] ;
        for(int j=0; j<k ; j++)
            pre[i] += arr[i+j];
        
    }

    







    return 0 ;
}