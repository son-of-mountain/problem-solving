#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    why we use prefix sum specifically in this example : 
        its an easy way to apply one value to all elements in the [l,r] range
        in O(n)


    Partial Sum approach in this example : 
        we want to apply the value we get in the first "l" to all of the range [l,r] 
        thats why we do : -val in [r+1]
        to get all values from [l,r] the same

    approach: 
        we want to know the number of costumers in all time
        so when a costumer gets it HE IS REGISTERED 
        and he well be t    

*/

int main(){
    
    sonic ;
    int n ; cin >> n ; 
    long long updates[100001]={};
    const int N = 100001;

    while(n--){
        int l,r ; cin >> l >> r; 

        updates[l]++;
        updates[r+1]--;
    }

    for(int i=1 ; i <= N ; ++i){
        updates[i] += updates[i-1];
    }

    long long ans = 0 ; 
    for(int i=1 ; i <= N ; ++i){
        ans = max(ans , updates[i]);
    }

    cout << ans ;
    
    return 0 ;
}