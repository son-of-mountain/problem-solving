#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define y cout<< "YES\n"
#define no cout<< "NO\n"

int main() {
    sonic ;

    int t ; cin >> t ;
    while (t--) {
        int n ; cin >> n ;
        string s ; cin >> s ;
        for(int i = 0 ; i < n-1 ; i++) {
            for(int j = 1 ; j < n ; j++) {
                if(s[i] > s[j]) { // 3 and 4 condition
                    no; break;
                }
                else
                    y;


            }

        }
    }



    return 0;
}