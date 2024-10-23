// https://codeforces.com/group/5pUldkahAU/contest/510058/problem/E
# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x, n ,m ;
    int i,j;
    bool found = false;
    
    cin >> n >> m ; 
    int arr[n][m];
    for(i=0 ; i< n ; ++i){
        for(j=0 ; j< m ; ++j){
        cin >> arr[i][j];
    }}
    
    
    cin >> x; 
    
    for( i=0 ; i< n ; ++i){
        for(j=0 ; j< m ; ++j){
            if( arr[i][j] == x){   // if element exists just print the index and exit the loop
                cout << "YES";    // by this we ensure that only the first element is printed
                found= true;
                break;
            }
            if(found)
                break;
    }}


// worst case:
// the element is the last in the array :
// even tho the index will exit the array without incrementing till the last element
    
    if(!found && i==n && j==m){
        cout << "NO";
    }
    
    return 0 ;
    
    
}