#include <bits/stdc++.h>
using namespace std;

int main() {
    
    unsigned short n ; 
    cin >> n ; 
    
    while(n--){
        
        string s;
        cin >> s;
        long long l = s.size() ; 
        
        if( l > 10)
            s = s[0] + to_string(l-2) + s[l-1]; // first letter + size-2 + last letter
        
        cout << s << endl; 
        
        
        
    }
    
}
