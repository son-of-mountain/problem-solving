# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define y cout<<"YES"<<'\n';
#define n cout<<"NO"<<'\n';
using namespace std;

// math

int main() {

    string s;
    cin>>s;

    long long sum=0;
    for(int i=0;i<s.length();++i) {
        sum+=(s[i]-'0');
    }

    if(sum%3==0) {
        y;
    }

    else {
        n;
    }




}