#include<iostream>
using namespace std ;

int main(){
    
    int n ;

    cin >> n ; 


    if(n< 10 || n>99 ) // donc on peut le diviser
            cout << "NO";
            
            
    int n1 ,n0;

    n0 = n/10;
    n1 = n%10;
        
    if(n0%n1==0 || n1%n0==0)
            cout << "YES";
            
    else
        cout << "NO" ; 
        
    
}