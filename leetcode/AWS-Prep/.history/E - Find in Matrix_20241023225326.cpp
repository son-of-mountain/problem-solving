// https://codeforces.com/group/5pUldkahAU/contest/510058/problem/E
# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x, n ;
    bool isfound = false;
    int i;
    
    cin >> n >> x; 
    
    int arr[n];
    for(i=0 ; i< n ; ++i){
        cin >> arr[i];
    }
    
    
    for( i=0 ; i< n ; ++i){
        if( arr[i] == x){   // if element exists just print the index and exit the loop
            cout << i;    // by this we ensure that only the first element is printed
            isfound = true;
            break;
        }
    }
    
    // we discuss the case with the element is not found + should go through all ements of array
    if(!isfound && i==n){
        cout << "Not Found";
    }
    
    return 0 ;
    
    

}