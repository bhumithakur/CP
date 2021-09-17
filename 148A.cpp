#include <bits/stdc++.h>
using namespace std;
int main(){
    int y,k, n, x;
    cin >> y >>k >>n;
    for(int x=1; x<n; x++){
        if((x+y)/k == 0 && (x+y)< n) {
            cout << x ;
        }
        else {
            cout << "-1";
        }
    }

    return 0;
}