# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define ye cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
using namespace std;

// compare to the first one


int main() {

    int t; /*t =1;*/
    cin>>t;
    int n ;
    while(t--) {
        cin >> n;
        int a[n+1];

        for(int i=1;i<=n;++i) cin >> a[i];

        if(a[1] != a[2] && a[1] != a[3]) {
            cout << 1 << '\n';
        }
        else {
            for(int i=2; i<=n; ++i) {
                if(a[1] != a[i])
                    cout << i << '\n';
            }
        }


    }
    return 0;





}