#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37

/*
    approach : 
		- input the array
		- calculate the prefix row sum, fixing the rows
		- calculate the prefix column sum, fixing the columns
		- move the box based on the Down and Right 
		- then calculate the Left and Up

		consider the following box: of (2,3)
		.   .   U
		.   .   D
*/

int main(){

	sonic ;

	int n,m,x,y; cin >> n >> m >> x >> y ;

	long long arr[n][m];

	for(int i=1;i<=n;++i)
		for(int j=1 ; j<=m ; ++j)
			cin >> arr[i][j];
			

	// going for the row sum for the pre[][]
	for(int i=1 ; i<= n ; ++i)
		for(int j=1;  j<= m ; ++j)
			arr[i][j] += arr[i][j-1];

	// going for the column
	for(int i=1 ; i<= m ; ++i)
		for(int j=1;  j<= n ; ++j)
			arr[j][i] += arr[j-1][i];


	// after the arr is calculated in the whole matrix
	// now its time for chosing the max
	
	// seems like if you nest the up and left value inside the array, this will cause a problem 

	// pay attention for the negative value 

	int u,d,l,r;
	long long ans = LLONG_MIN;
	for(d=x ; d<= n ;++d)
		for(r=y ; r<= m ;++r){
			u = d-x+1;
			l = r-y+1;
			ans = max(ans, arr[d][r]-arr[d][l-1] - arr[u-1][r] + arr[u-1][l-1] );
		}


	cout << ans ;

	return 0 ;
}
