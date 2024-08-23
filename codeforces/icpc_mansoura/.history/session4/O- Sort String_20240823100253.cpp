#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    APPROACH 


*/

int main(){
    
    sonic ;

    string s ;
    cin >> s ;

    int n = s.length();

    char frq[26]={};

    for(int i=0;i<n;i++){
        frq[s[i]-65 ]++;
    }

    return 0 ;
}