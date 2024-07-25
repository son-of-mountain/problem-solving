#include <bits/stdc++.h>
using namespace std;

string removezero(string str){
    
    string res= "";
    for(char t : str)
        if(t != '0')
            res += t ;
    
    return res ;    
}


int main() {

    // lets find an algorithm that does this thing 
    // so we have the following 
    // we take the first position we find of 0 
    // if all the numbers after it are a[i]+b[i]<10 then Congrats you got it right
    // else then the number is not
    
    //found out that this approach is not logic and it doesnt solve the problem
    // lets do a basic string handling to solve the problem 
    
    
    //ALWAYS THINK OF APPENDING TO NEW STRING
    
    
    
    string a , b , str_c , str_c_n0; 
    
    cin >> a >> b ;
    
    int a_n0 , b_n0 , c , c_n0; 
    
    // save the value of c before 0s removal
    c = stoi(a) + stoi(b);
    str_c = to_string(c);
    
    // remove the 0s from strings a,b and str_c
    a = removezero(a);
    b = removezero(b);
    str_c = removezero(str_c);
    
    
    a_n0 = stoi(a);
    b_n0 = stoi(b);
    
    c_n0 = a_n0 + b_n0 ; 
    str_c_n0 = to_string(c_n0);
    
    // cout << "str = " << str_c_n0 << " normal " << str_c <<endl ; 
    
    if(str_c_n0 == str_c)
        cout << "YES"; 
        
    else
        cout << "NO"; 
    
    
    
    
        
        
    
    

}
