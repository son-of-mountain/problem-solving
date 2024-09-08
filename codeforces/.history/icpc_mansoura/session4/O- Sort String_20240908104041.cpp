#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

/*
    APPROACH 

    what causes the 'weird char' ??

    its because i didnt include the nested loop : 
        for(int j = 0; j < frq[i]; j++){
            ..........
        }

    therefore even if there is a value , it will be printed

    ON THE OTHER HAND, if i used that nested loop > print 'i' number of times

        means that if the value is 0 > nothing will be printed


    1- Frequency array : 8:58
     Frequency array Challenge : 26:10
    2- Prefix Sum  : 35:32
    2- Prefix Sum Problem : 50:11
    Break : 52:00 
    2- Prefix Sum Problem Sol : 50:11
    3- Partial Sum :  
    4- 2D Prefix Sum: 
*/

int main(){
    
    sonic ;

    int n ; 
    cin >> n ;

    int frq[26]={};

    for(int i = 0; i < n;i++){
        char c; 
        cin >> c ;
        frq[c-'a']++ ;
    }


    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < frq[i]; j++){
            cout << (char)(i+'a') ;
        }
    }


    return 0 ;
}