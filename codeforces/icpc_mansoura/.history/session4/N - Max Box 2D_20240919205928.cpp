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

	int n,m,x,y,; cin >> n >> m ;
	long long pre[1001][1001]={};

	int arr[n][m];
	for(int i=1;i<=n;++i)
		for(int j=1 ; j<= m ; ++j)
			cin >> arr[i][j];


	// going for the row sum for the pre[][]
	for(int i=1 ; i<= n ; ++i)
		for(int j=1;  j<= m ; ++j)
			pre[i][j] += pre[i][j-1] + arr[i][j];

	// going for the column
	for(int i=1 ; i<= m ; ++i)
		for(int j=1;  j<= n ; ++j)
			pre[j][i] += pre[j-1][i] + arr[j][i];


	// after the pre is calculated in the whole matrix
	// now its time for chosing the max
	long long ans = 0;
	for(u=1,d=x ; d<= n ; ++u , ++d)
		for(l=1,r=y ; r<= m ; ++l , ++r)
			ans = max(ans, pre[d][r]-pre[d][l-1] - pre[u-1][r] + pre[u-1][l-1] );


	cout << ans ;

	return 0 ;
	}
