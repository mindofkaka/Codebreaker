#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, d;
    cin >> n >> d;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> v(arr, arr+n);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum(0);
    for(int i = 0; i < d; i++){
        sum += v[i];
    }
    
    cout << sum;
}
