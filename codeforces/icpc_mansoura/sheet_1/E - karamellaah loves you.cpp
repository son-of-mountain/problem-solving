#include<iostream>
using namespace std ;

int main(){
    
    int n ;

    int n1 ,n0;

    cin >> n ; 
    n0 = n/10;
    n1 = n%10;
        
    
    if(n1==0){
        cout << "YES" ;
        return 0;
    }
            
    else if(n1%n0==0 || n0%n1==0 )
            cout << "YES";
            
    else
        cout << "NO" ; 
        
    
}