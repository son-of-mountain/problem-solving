#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    int t=0; 
    cin >> t ;
    while(t--){
        int arr[3] ;
        cin >> arr[0] >> arr[1] >> arr[2] ;
        if((arr[0]+arr[1]+arr[2]) >=2)
            nbr_sol++;
    }
    cout << nbr_sol << '\n' ;
    return 0 ;

}