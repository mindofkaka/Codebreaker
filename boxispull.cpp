#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int x1, y1, x2, y2;
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        
        int result;
        if(x1 == x2 || y1 == y2){
            result = (abs(x2 - x1) + abs(y2 - y1));
            cout << result << endl;
        }else{
            result = (abs(x2 - x1) + abs(y2 - y1)) + 2;
            cout << result << endl;
        }
    }
}
