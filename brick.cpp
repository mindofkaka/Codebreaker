#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int e; cin >> e;
        while (!v.empty() && v.back() <= e) v.pop_back();
        v.push_back(e);
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << endl;
    }
}
