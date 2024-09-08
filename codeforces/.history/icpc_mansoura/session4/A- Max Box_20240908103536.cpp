#include<bits/stdc++.h>
using namespace std;
#define sonic ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL);

// stopped at 1:04:37


int main(){
    
    sonic ;

    long long pre[100001]={};
    int arr[100001]={}; 
    int n,k ; cin >> n >> k;

    for(int i=0; i<n ; i++)
        cin >> arr[i] ; 

    // calculate the elements of pre using the range and loop determined
    // 

    for(int i=0; i< n-k ; i++ ){
        pre[i] = arr[i] ;
        for(int j=1; j<k ; j++)
            pre[i] += arr[i+j];
        
    }

    long long maxsub = 0;
    maxsub = *max_element(pre, pre+n-k);

    cout << maxsub ;
    
    return 0 ;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define sonic ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    sonic;

    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Initial sum of the first window of size K
    long long current_sum = 0;
    for(int i = 0; i < k; i++)
        current_sum += arr[i];

    long long max_sum = current_sum;

*/