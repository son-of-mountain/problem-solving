 #include <bits/stdc++.h>
//include <iostream>
using namespace std;

int main(){

        long long n,m; 
        cin >> n ;
        m = n ; 

        cout << n << " ";
        
        while( n != 1 ){
                if(n %2 == 0)
                        m = n/2;
                else
                    m = n*3 + 1;
            
            n =m; 
            cout << n << " ";       
        }


    
}
