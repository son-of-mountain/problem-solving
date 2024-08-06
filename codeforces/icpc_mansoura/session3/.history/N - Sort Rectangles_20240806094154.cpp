#include <bits/stdc++.h>
using namespace std ; 


struct point{
    int x,y;
};
struct rec{
    point a1,a2,a3,a4;
};

int main(){

    int n;
    cin >> n ;

    rec a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].a1.x >> a[i].a1.y >> a[i].a2.x >> a[i].a2.y >> a[i].a3.x >> a[i].a3.y >> a[i].a4.x >> a[i].a4.y;
    
    }
    
    // sorting the rectangle based on their areas in ascending order
    int area[n];
    // calculating the area of each rectangle

    for(int i=0; i<n; i++)
        area[i] = abs(a[i].a1.x-a[i].a2.x) * abs(a[i].a2.x - a[i].a3.x) ;


    // sort(area, area+n);

    int mat[n][2];

    for(int i=0; i<n; i++){
        mat[i]
    }

    return 0;


}

