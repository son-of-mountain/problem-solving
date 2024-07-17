#include<bits/stdc++.h>
using namespace std; 
int main(){
    
    int  n , m ; 
    cin >> n >> m ;
    int i , j=0 , ct ; 
    
    int t[n];
    for(i =0 ; i<n ; i++)   cin >> t[i];
    
    //what will sorting the array make it easy
    
    // i dont have to browse all the array 
    // so i just need to go through all the array until i find an element that is not equal
    // and how can I count the numbers ? 
    // suppose that i found that t[j]!=i then ct = i
    // 0   1   2   3   4   5   6   7   8   9   10   11   at this point i = 5 then ct=5 
    // 1   1   2   2   3   3   3   4   5   5    
    
    sort(t , t+n) ;

    // the problem that i had is that i didnt increment inside the while loop
    // which will make it harder

    for(i = 1 ; i<= m ; i++){
        ct =0 ;
        while(i == t[j]){
            ct++;
            j++;
            
        }
        
            
        cout << ct << endl ; 
        
        
    }
    
    
}