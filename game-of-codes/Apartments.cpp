#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m,k;
	cin >> n >> m >> k ;


	int a[n];
	for(int i = 0 ; i < n ; ++i) 
		cin >> a[i];

	int b[m];
	for(int i= 0 ; i < m ; ++i) 
		cin >> b[i];

	sort(a,a+n);
	sort(b,b+m);

	int match=0,i=0,j=0; 

	while( i < n){
	
		while( j < m && b[j] < a[i] - k) j++;

		if( abs( a[i] - b[j] ) <=k && j<m){
			match++;
			i++;
			j++;}

		else
			i++;
	}

	cout << match ; 


}
