# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define yy cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
using namespace std;

// go through all cases
// if you have to chose the min, pick one and compare to it


int main() {

    int t; /*t =1;*/
    cin>>t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        string s[n];

        for(int i=0; i<n; i++) {
            cin >> s[i];
        }

        int md = INT_MAX;
        for(int i=0; i<n-1; ++i) {
            for(int j=i+1; j<n; ++j) {

                int diff = 0 ;

                for(int k=0 ; k<m; ++k) {
                    diff += abs(s[i][k]-s[j][k]) ;
                    }

                md = min(md, diff);

                }
            }
        cout << md << '\n';

        }
    }





