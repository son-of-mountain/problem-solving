#include<iostream>
using namespace std ;
 
int main(){
    
    int n ; 
    int a=0 , d=0 ; 
    cin >> n;
    while(n--){
        char c ;
        cin >> c ;
        if(c == 'A')
            a++;
        if(c == 'D')
            d++;
    }
    
    if(a>d)
        cout << "Anton";
    else if(a<d)
        cout << "Danik";
    else
        cout << "Friendship";
    
}