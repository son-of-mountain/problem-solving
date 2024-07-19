#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int i, j, i1, j1; 
    
    int mat[5][5];
    
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1) {
                i1 = i;
                j1 = j;}
            
        }
        
    //  -----------MATHEMATICAL APPROACH---------------
    
    int moves = abs(i1 - 2) + abs(j1 - 2);
    cout << moves ; 
    
    
    
    
    return 0;

    

    
    


}
