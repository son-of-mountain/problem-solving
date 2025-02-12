#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	int arr[n];
	for(int i = 0 ; i < n ; ++i)
		cin >> arr[i] ;

	sort(arr , arr+n);
	int tmp=arr[0];
	int nb = 1;

	for(int i = 0 ; i < n-1 ; ++i){
		if(tmp != arr[i+1]){
			nb++;
			tmp = arr[i+1];
		}
	}

	cout << nb; 

}
