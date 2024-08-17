#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    I SHOULD GET A HINT ABOUT
    STRING HANDLING
    JUST A HINT
    USING GPT

    My problem was that i didnt understand deeply the question

    
*/

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
    if(!nogreatthan4)
        cout << s ; 
    
    else{
        // change only that are > 4 
        for(int i=0; i<n; i++)
            if( (s[i]-'0')>4 ){
                int tmp = s[i]-'0';
                cout << tmp << endl ; 
                s[i] = (char)(9-tmp);
                cout << s[i] << endl ; 
                
            }

        // 0s handling
        for (int i = 0; i < n; i++)
        {
            // if we find a non-zero digit
            // or you found a 0 digit but there is something before it 
            if((s[i]!='0' && i!= n) || (s[i]=='0'&& newstr!="") ){
                newstr += s[i]; 
        }
        // if you went through all the digits and found all elements are 0 then this is 0 
        if(newstr=="")
            newstr = "0";
        
        cout << newstr ;
    }

    return 0 ;
}}