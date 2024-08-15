#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    string s;
    int n = s.length();

    cin >> s;
    bool nogreatthan4 = true;

    for(int i=0; i<n; i++){
        if( (s[i]-'0')>4 )
            nogreatthan4 = false;
    }
    if( nogreatthan4)
        cout << s ; 
    elsr


}