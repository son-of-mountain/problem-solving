#include <bits/stdc++.h>
using namespace std ; 
#define ll long long

struct point{
    int x,y;
};
struct rec{
    point a1,a2,a3,a4;
    ll area(rec& a ,rec& b){
        ll l = max({a1.y,a2.y,a3.y,a4.y}) - min({a1.y,a2.y,a3.y,a4.y}); 
        ll y = max({a1.x,a2.x,a3.x,a4.x}) - min({a1.x,a2.x,a3.x,a4.x}); 
        return l
    }
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



    int mat[n][2];

    for(int i=0; i<n; i++){
        mat[i][1]=area[i];
        mat[i][0]=i;
    }
    sort(area, area+n);
    
    for(int i=0; i<n; i++){
        mat[i][1]=area[i];
    }


}

