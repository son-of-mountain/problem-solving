#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37

/*
    approach : 
    - first you should make a prefix array where results are stored
    - then , take two parameters that increments along the pre array
    - calculate the substraction of the elements
    - store that result as the answer for memory efficiency
*/

int main(){
    
    sonic ;

    int n, k ; cin >> n >> k ;
    int pre[10001]={};


    int arr[n] ; for(int i = 0 ; i < n ; i++) cin >> arr[i] ;

    for(int i=1 ; i<= n ; i++)
        pre[i] = pre[i-1]+ arr[i];

    int ans = INT_MIN ;
    for(int l=1,r=k ; r<=n ; l++ , r++)

    
    return 0 ;
}
