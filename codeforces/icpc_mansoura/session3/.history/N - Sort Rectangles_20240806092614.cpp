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
    int area[n];
    // calculating the area of each rectangle

    for(int i=0; i<n; i++){
        
        area[i] = sqrt(pow(a[i].a1.x-a[i].a2.x,2) + pow(a[i].a1.y-a[i].a2.y,2)) * sqrt(pow(a[i].a2.x - a[i].a3.x,2) + pow(a[i].a2.y - a[i].a3.y,2) ) ;
        }

    for(int i=0; i<n; i++){
        cout << i+1 << " " << area[i] << "";


    return 0;


}

