#include <bits/stdc++.h>

using namespace std;

void fastIO() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

}

int main() {
    fastIO(); 
    int n; cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int sum_main_dig = 0, sum_non_main_dig = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(i == j){
                sum_main_dig += matrix[i][j];
            }
            if(j == n - i - 1){
                sum_non_main_dig += matrix[i][j];
            }
        }
    }

    cout << abs(sum_main_dig - sum_non_main_dig) << '\n';

    return 0;
}