#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

int main(){
    
    sonic ;

    int t=0; 
    cin >> t ;
    while(t--){
        int n ;
        bool is_nice = true; 
        cin >> n ;
        int arr[n] ;
        for(int i=0; i<n; i++) cin >> arr[i] ;
        sort(arr , arr + n) ; 
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                
            }
        }
    }


    return 0 ;

}