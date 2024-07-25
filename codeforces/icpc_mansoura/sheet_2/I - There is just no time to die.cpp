// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip>
using namespace std;

# define ll long double

int main() {
    
    ll k ;
    int n ;
    
    cin >> k >> n;
    ll taps[n] , sum=0 ; 
    
    for(int i=0 ; i< n ; i++)
        {
            cin >> taps[i] ;
            sum += 1/(taps[i]) ; }
    
    
    cout << setprecision(6) <<fixed;
    
    cout << static_cast<ll>(1/sum) ; 
    

    
}