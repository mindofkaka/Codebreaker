#include <bits/stdc++.h>
using namespace std;

int main(){
	int d;
	cin >> d;
	
	int arr[d];
	for(int i = 0; i < d; i++){
	    cin >> arr[i];
	}
	
	int sum = 0;
	for(int i = 0; i < d; i++){
	    sum += arr[i];
	}
	
	cout << sum;
}
