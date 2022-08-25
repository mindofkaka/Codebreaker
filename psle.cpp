#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    if(a > 91){
        cout << "A*";
    }else if(a <= 90 && a >= 75){
        cout << "A";
    }else if(a <= 74 && a >= 60){
        cout << "B";
    }else if(a <= 59 && a >= 50){
        cout << "C";
    }else if(a <= 49 && a >= 35){
        cout << "D";
    }else if(a <= 34 && a >= 20){
        cout << "E";
    }else{
        cout << "U";
    }
}
