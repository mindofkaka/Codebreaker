#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l, t;
    cin >> l >> t;
    for(int i = 2; i <= t; i++){
        if(l == 1){
            l = -1;
            break;
        }
        if(l%2 == 0){
            l /= 2;
        }else{
            l = 3*l+1;
        }
    }
    cout << l;
}
