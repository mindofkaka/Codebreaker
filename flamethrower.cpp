#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n-k+1; i++){
        int best = 0;
        for(int j = 0; j < k; j++){
            best += arr[i+j];
        }
        sum = max(best, sum);
    }
    cout << sum;
}
