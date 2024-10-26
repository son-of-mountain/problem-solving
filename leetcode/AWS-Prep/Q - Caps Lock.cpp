# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define y cout<<"YES"<<'\n';
#define n cout<<"NO"<<'\n';
using namespace std;

char change_case(char s){
    if(islower(s)) {
        return toupper(s);
    }
    if(isupper(s)) {
        return tolower(s);
    }
    return s;
}
int main() {

    string s;
    bool u=true, uef=true;

    cin>>s;
    for(int i=0;i<s.length();i++) {
        if(islower(s[i])) {
            u = false;
            if(i != 0) uef=false;
        }
        else {
            if(i == 0) u=true;
        }
    }

    if( u || uef) {
        transform(s.begin(), s.end(), s.begin(), change_case);
    }

    cout << s << '\n';

    return 0;





}