#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    I SHOULD GET A HINT ABOUT
    STRING HANDLING
    JUST A HINT
    USING GPT

    My problem was that i didnt understand deeply the question

    so if the first digit is 9 > 0 is the result
    and according to the problemset , THIS IS A LEADING ZERO SOLUTION
    so its rejected
*/

int main(){
    
    sonic ;

    string s ;
    int n = s.length();

    cin >> s ;

    // Handling the first digit
    // IT SHOULDNT BE 0

    if( s[0]!= '9' && s[0]>'4')
        s[0] = '9' - s[0] + '0' ;

    // Handling the remaining digits
    for(int i=1; i< n ; i++){
        if(s[0] > '4')
            s[0] = '9' - s[0] + '0' ;

    }
    

    return 0 ;
}