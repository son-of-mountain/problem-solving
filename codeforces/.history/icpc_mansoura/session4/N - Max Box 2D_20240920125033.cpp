#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37

/*
    approach : 
        STOP FORGETTING THE PREINCREMENT THING 
    goal : 
        look for the max number result of a range given
*/

int main(){

	sonic ;
	int pre[1001][1001]={};

	int n,m,x,y; cin >> n >> m >> x >> y ;

	int arr[n][m];
	for(int i=1;i<=n;++i)
		for(int j=1 ; j<=m ; ++j)
			cin >> arr[i][j];
			

	// going for the row sum for the pre[][]
	for(int i=1 ; i<= n ; ++i)
		for(int j=1;  j<= m ; ++j)
			a[i][j] += a[i][j-1] + arr[i][j];

	// going for the column
	for(int i=1 ; i<= m ; ++i)
		for(int j=1;  j<= n ; ++j)
			a[j][i] += a[j-1][i] + arr[j][i];


	// after the a is calculated in the whole matrix
	// now its time for chosing the max
	int u,d,l,r;
	int ans = 0;
	for(u=1,d=x ; d<= n ; ++u , ++d)
		for(l=1,r=y ; r<= m ; ++l , ++r)
			ans = max(ans, a[d][r]-a[d][l-1] - a[u-1][r] + a[u-1][l-1] );


	cout << ans ;

	return 0 ;
}
