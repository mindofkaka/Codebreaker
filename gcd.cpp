#include <bits/stdc++.h>
using namespace std;

int main(){
	long long m, n;
	cin >> m >> n;
	
	int r = m % n;
	while(r != 0){
	    m = n;
	    n = r;
	    r = m % n;
	}
	cout << n;
}
