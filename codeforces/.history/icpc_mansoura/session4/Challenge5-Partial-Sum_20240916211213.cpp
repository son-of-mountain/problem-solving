#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 2:14:36

/*
    input: 
    4 4

    6 7 8 9 
    5 4 3 2
    4 7 8 3
    5 3 3 3
    (
     U L 
     D R
    )
    2 2
    3 4 

    output: 
    27




*/

int main(){
    
    sonic ;

     
    int n,m,u,d,l,r ; cin >> n >> m;

    int arr[n][m]={};
    for(int i=1 ; i <= n ; i++)
        for(int j=1 ; i<= m ; i++)
            cin >> arr[i][j] ; 

    cin >> u >> l >> d >> r;   
    long long pre[[r-l+1];

    // another method using the partial sum 
    while(q--){
        cin >> v >> l >> r;
        int update[n]={};
        update[l] += v; 
        update[r+1] -= v;
        for(int i=1 ; i<= n ; i++) update[i] += update[i-1]; // prefix sum
        for(int i=1 ; i<=n ; i++) arr[i] += update[i]; // store the prefix sum to the new array

        for(int i=1 ; i<=n ; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    


    return 0 ;
}
