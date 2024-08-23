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

    int frq[26]={};

    for(int i = 0; i < n;i++){
        char c; 
        cin >> c ;
        frq[c-'a']++ ;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < frq[i]; j++){
            
    }





    return 0 ;
}