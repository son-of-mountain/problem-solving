// https://codeforces.com/group/5pUldkahAU/contest/510058/problem/B
# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x, n ;
    int i;
    
    cin >> n >> x; 
    
    int arr[n];
    for(i=0 ; i< n ; ++i){
        cin >> arr[i];
    }
    
    
    for( i=0 ; i< n ; ++i){
        if( arr[i] == x){   // if element exists just print the index and exit the loop
            cout << i;    // by this we ensure that only the first element is printed
            break;
        }
    }


// worst case:
// the element is the last in the array :
// even tho the index will exit the array without incrementing till the last element
    
    if(i==n){
        cout << "Not Found";
    }
    
    return 0 ;
    
    
}