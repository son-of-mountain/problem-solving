#include <bits/stdc++.h>
using namespace std;

int main() {
    
    unsigned short t ; 
    cin >> t ; 
    
    while(t--){
        
        unsigned short n ; 
        cin >> n ; 
        
        unsigned short a[n] ; 
        for(int i=0;i<n;i++)
            cin >> a[i] ; 
            

        // Approach 
        // Take the first element then compare it with all
        
        // If the first element is != to the second then check which one of them is spy
        
        // Else the first element is not the spy , so go through the elements till you find one
        // that it is != and thats the spy 
        
        int i ; 
        for(i=1;i<n;i++)
            if(a[i] != a[0])
                break ; 
        

        if(i==1){
            
            if(a[1]==a[2])
                cout << "1" << endl;
                
            else
                cout << "2"<< endl; 
            
        }
        
        else
            cout << i+1 << endl;    
        
        
        
    }
    

    


}
