#include<iostream>

int main(){
    
    int n,a,b,x,s=0;
    
    std::cin>>n;
    
    // do{
    std::cin>>a>>b;
    // }while(a>b);
    
    for(int i=0; i<n ; i++){
        
    std::cin>>x;
    
    if(x>=a && x<=b)
        s+=x;
    }
    
    std::cout<<s;
    
    
    
}
