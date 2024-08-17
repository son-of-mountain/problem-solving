#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    APPROACH 

    Take the first element and try not to make it 0
    

*/

int main(){
    
    sonic ;

    string s ;
    cin >> s ;

    int n = s.length();

    // Handling the first digit
    // IT SHOULDNT BE 0

    if( s[0]!= '9' && s[0]-'0'>4)
        s[0] = '9' - s[0] + '0' ;

    // Handling the remaining digits
    for(int i=1; i< n ; i++){
        if(s[i]-'0'>4)
            s[i] = '9' - s[i] + '0' ;

    }
    cout << s ;

    return 0 ;
}