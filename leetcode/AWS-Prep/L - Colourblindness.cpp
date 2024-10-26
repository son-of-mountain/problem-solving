# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define y cout<<"YES"<<'\n';
#define n cout<<"NO"<<'\n';
using namespace std;

int main() {
    int t,m;
    bool issame=true;
    cin>>t;
    string f,s;
    while(t--) {
        cin >> m;
        cin >> s;
        cin >> f;

        // lets begin
        for(int i=0;i<m;++i){
            if( f.at(i)==s.at(i) || (s.at(i)=='G' && f.at(i)=='B') || (s.at(i)=='B' && f.at(i)=='G')) {
                issame = true;
            }
            else {
                issame = false;
                break;
            }

        }

        if(issame) {
            y;
        }
        else {
            n;
        }






    }
}