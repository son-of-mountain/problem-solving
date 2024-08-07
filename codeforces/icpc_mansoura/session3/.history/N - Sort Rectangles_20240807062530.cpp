#include <bits/stdc++.h>
using namespace std ; 
#define ll long long

struct point{
    int x,y;
};
struct rec{
    point a1,a2,a3,a4;
    int id;
    ll area(){
        ll l = max({a1.y,a2.y,a3.y,a4.y}) - min({a1.y,a2.y,a3.y,a4.y}); 
        ll y = max({a1.x,a2.x,a3.x,a4.x}) - min({a1.x,a2.x,a3.x,a4.x}); 
        return l*y ; 
    }
};
bool comp(rec& a , rec& b){
    ll aarea =a.area(); 
    ll barea =b.area(); 
    return aarea > barea ; 
}

int main(){

    int n;
    cin >> n ;

    rec a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].a1.x >> a[i].a1.y >> a[i].a2.x >> a[i].a2.y >> a[i].a3.x >> a[i].a3.y >> a[i].a4.x >> a[i].a4.y;
        a[i].id = i+1 ;
    }

    // we will sort the rectangles based on the area 
    // so that the index doesnt change

    // since we added an index to the struct 
    // this will allow us 




}

