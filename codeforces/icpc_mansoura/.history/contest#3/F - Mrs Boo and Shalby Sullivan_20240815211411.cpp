#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    string s,newstr="";
    int n = s.length();

    cin >> s;
    bool nogreatthan4 = true;

    for(int i=0; i<n; i++){
        if( (s[i]-'0')>4 ){
            nogreatthan4 = false;
            break ;
        }
    }
    if( nogreatthan4)
        cout << s ; 
    
    else{
        // change only that are > 4 
        for(int i=0; i<n; i++)
            if( (s[i]-'0')>4 ){
                int tmp = s[i]-'0';
                s[i] = (char)(abs(9-tmp));
            }

        // and then look for 0s
        for (int i = 0; i < n; i++)
        {
            // if we find a non-zero digit 
            if(s[i]!='0' && i!= n-1 || s[i]=='0' )
                newstr += s[i]; 
            if(newstr=="")
                newstr = "0";
        }
        
        cout << newstr ;
    }


}