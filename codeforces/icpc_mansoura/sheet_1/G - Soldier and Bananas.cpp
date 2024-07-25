#include<iostream>
using namespace std; 

int main(){
    
    int k,n,w;
    
    cin >> k >> n >> w ;
    
    int sum=0;
    
    for(int i=1; i<=w ; i++){
        sum += k*i ;
    }
    
    int bor = sum-n ;
    
    if(bor > 0)
        cout << bor ;
        
    else
        cout << "0";
    
}