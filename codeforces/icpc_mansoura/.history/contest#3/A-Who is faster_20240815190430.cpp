#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    int t=0; 
    cin >> t ;
    int  nbr=0;
    while(t--){
        int arr[4] 
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] ; 
        if(arr[1]> arr[0])
            nbr++;
        if(arr[2]> arr[0])
            nbr++;
        if(arr[3]> arr[0])
            nbr++;
        cout << nbr << '\n' ; 
    }

    return 0 ;

}