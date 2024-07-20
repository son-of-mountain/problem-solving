#include <bits/stdc++.h>
using namespace std;

int main() {

    int l ,r , n ;
    
    cin >> l >> r >> n ;
    
    // approach : 
    
    // set = NO_divs + NO_non_divs <=> NO_non_divs = set - NO_divs 
    
    // set = r-l+1 
    // NO_divs = (r-l)/n        if  l cannot divide n
    // NO_divs = (r-l)/n - 1    if  l can divide n (because it shouldnt be included in our formula)
    
    
    
    int non_div = r-l+1-(r/n)+(l/n) ; 
    
    if(!(l%n))
        cout << non_div-1 ;
    else
        cout << non_div ;

}
