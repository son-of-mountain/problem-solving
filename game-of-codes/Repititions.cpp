#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);

	string s;

	cin >> s ;

	long long rep = LLONG_MIN;
	for(int i = 0 ; i < s.size() ; ++i){
		int j = i;
		while( j < s.size() - 1 && s[j] == s[j+1]){
			j++ ;	}
		
		rep = max(rep , j-i+1LL) ; //or j-i+1 in order to get all the size of the subseq
		i = j ;
	}
	cout << rep;


}
