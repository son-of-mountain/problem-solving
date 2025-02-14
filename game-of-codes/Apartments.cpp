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

	int pos = 0 , app=0 ;

	for(int i = 0 ; i < n ; ++i)
	{	pos = 0;
		for(int j=pos ; j < m ; ++j){
			
			if( a[i] <= b[j]+k && a[i] >= b[j]-k){
				app++;
				pos = j+1;}
		}
	}
		

	cout << app;

}
