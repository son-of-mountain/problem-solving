# include<bits/stdc++.h>
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);
#define yy cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
using namespace std;


int main() {

    long long n;
    long long s=0;
    cin>> n;

    int a[1000000];
    for(long long i=0; i<n-1; i++) {
        cin>>a[i];
    }

    for(long long i=0; i<n-1; i++) {
        s+=a[i];
    }

    cout << (n*(n+1)/2 - s) << '\n';
    return 0;
}



