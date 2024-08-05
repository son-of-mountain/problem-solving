#include <bits/stdc++.h>
using namespace std ; 

int main(){

    int n;
    cin >> n ;
    
    int arr[n][3], frq[n][3]={};
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0 ; i<n ; i++){
        for(int k=0 ; k<n; k++){
            // for(int j=0 ; j<3 ; j++){
                
                if(arr[i][0]==arr[k][0] && k!=i) frq[i][0]++;
                
                if(arr[i][1]==arr[k][1] && k!=i) frq[i][1]++;
                
                if(arr[i][2]==arr[k][2] && k!=i) frq[i][2]++;
                
                
            // }
            
        }
    }
    
    for(int i=0; i< n ; i++){
        for(int j=0 ; j<3 ; j++){
        
            cout << frq[i][j] << " " ;
        
    }
    cout << '\n';
        
    }

}

