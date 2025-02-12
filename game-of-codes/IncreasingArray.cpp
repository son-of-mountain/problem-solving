#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ; 
	cin >> n ; 

	long long ct=0 ; 
	int arr[n]; 

	for(int i = 0 ; i < n ; ++i ) 
		cin >> arr[i];

	// now lets calculate the moves

	for(int i = 1 ; i < n ; ++i){
		
		if(arr[i] < arr[i-1]){
			while(arr[i] != arr[i-1]){
				arr[i]++;
				ct++;
			}
		}

	}
	
	cout << ct;

}
