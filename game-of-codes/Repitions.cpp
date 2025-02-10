#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a=0 , c=0 , t=0 , g=0;
	string s;

	cin >> s ; 

	for(int i = 0 ; i < s.size() ; ++i){
		if(s[i] == 'A')
			a++;
		if(s[i] == 'C')
			c++;
		if(s[i] == 'T')
			t++;
		if(s[i] == 'G')
			g++;
	}
	cout << max({a, c , t, g}) ; 

}
