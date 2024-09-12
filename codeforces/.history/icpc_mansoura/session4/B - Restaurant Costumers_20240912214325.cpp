#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37

/*
    approach : 

*/
int updates[100001]={};

int main(){
    
    sonic ;
    int n ; cin >> n ; 

    while(n--){
        int l,r ; cin >> l >> r; 

        updates[l]++;
        updates[r+1]--;


    }
    

    


    
    return 0 ;
}