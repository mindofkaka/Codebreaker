#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	
	int arr[m];
	for(int i = 0; i < m; i++){
	    cin >> arr[i];
	}
	
	sort(arr, arr+m);
	
	int i = 0;
	int result = 0;
	while(i < m){
	    if(n < arr[i]){
	        break;
	    }
	    n -= arr[i];
	    i++;
	    result++;
	}
	cout << result;
}
