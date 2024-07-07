#include<iostream>
using namespace std;

int main(){
    
    int t ; 
    cin >> t;
    
    
    while(t--){
        int a,b,c ; 
        cin >> a >> b >> c ; 
        if(a!=b){
            if(b==c) cout << a<< endl;
            else cout << b<< endl;
        }
        else
            cout << c << endl;
        
    }
}