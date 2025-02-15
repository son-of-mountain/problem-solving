#include <bits/stdc++.h>
using namespace std;

int main(){

	int n , x ;
	cin >> n >> x ;


	int p[n];
	for(int i = 0 ; i < n ; ++i) cin >> p[i];

	int i = 0, j = n-1 , bg=0;

	while(i <= j){
		if(p[j] + p[i] <= x){
			i++;
			j--;
			bg++;
		}
		
		else{
