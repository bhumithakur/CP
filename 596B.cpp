#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n ;
    cin >> n ;
    ll arr[n];
    ll a = 0 ;
     ll b = 0 ;
    for(int i = 0 ; i < n; i++){
        cin>> arr[i];
    }
    for(int i=0; i<n; i++){
        if(i < n/2){
            a += arr[i];
        }
        else {
            b += arr[i];
        }
    }
    cout << a*a + b*b;
    return 0;
}