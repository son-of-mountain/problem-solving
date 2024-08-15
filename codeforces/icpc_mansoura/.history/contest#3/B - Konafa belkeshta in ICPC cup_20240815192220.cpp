#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    int t=0; 
    cin >> t ;
    while(t--){
        int arr[4]={},nbr=0 ;  
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] ; 
        // cout << arr[0] << " " << arr[1] << " "<< arr[2]<< " " << arr[3] << '\n'  ; 
        if(arr[1]> arr[0])
            nbr++;
        if(arr[2]> arr[0])
            nbr++;
        if(arr[3]> arr[0])
            nbr++;
    }

    return 0 ;

}