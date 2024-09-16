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

     
    int n,m,u,d,l,r ; 
    cin >> n >> m;

    int arr[n+1][m+1]={};
    
    for(int i=1 ; i <= n ; i++)
        for(int j=1 ; j<= m ; j++)
            cin >> arr[i][j] ; 
            
    
    cin >> u >> l >> d >> r;   

    long long pre[n][m]={};

    // another method using the partial sum 

    for(int i=u ; i <= d ; i++){

        for(int j= l ; j<=r ; j++){

            if(j==l)
                pre[i][j] = pre[i-1][r] + arr[i][j];

            else
                pre[i][j] = pre[i][j-1] + arr[i][j];
            
        }
    }
    
    
    cout << pre[d][r] ; 

    


    return 0 ;
}
