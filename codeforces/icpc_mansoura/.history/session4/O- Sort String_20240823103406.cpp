#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    APPROACH 


*/

int main(){
    
    sonic ;

    int n ; 
    cin >> n ;

    char frq[26]={};
    
    for(int i = 0; i < n;i++){
        char c; 
        cin >> c ;
        frq[c-'a']++ ;
    }








    return 0 ;
}