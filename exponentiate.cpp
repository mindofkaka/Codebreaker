#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll m;

ll pow(ll base, ll ex){
	if(ex == 0) return 1;
	if(ex == 1) return base;
	ll res = pow(base, ex/2)%m;
	res = (res*res)%m;
	if(ex%2==1) res = (res*base)%m;
	return res;
}

void solve(){
	ll a, b, ans;
	cin >> a >> b >> m;
	a %= m;
	cout << pow(a, b)%m << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while(t--){
		solve();
	}
}
