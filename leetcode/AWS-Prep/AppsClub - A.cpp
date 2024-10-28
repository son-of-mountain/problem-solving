# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define yy cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
using namespace std;


int main() {

    int t; /*t =1;*/
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[4];
        for(int & i : a) {
            cin>>i;
        }
        cout << *max_element(a, a+4) << '\n';

    }
    return 0;





}