#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;
   cin >>t; 
   while(t--){
       ll n, m, count = 1;
       cin >> n;
       ll p[n];
       for( ll i=0; i<n; i++){
           cin >> p[i];
       }
       cin >> m;
       ll q[m];
       for( ll i=0; i<m; i++){
           cin >> q[i];
       }
       if(p[n] == q[m]){
           cout << "1";
       }
       for( ll i=0; i<n; i++){
           for( ll i=0; i<m; i++){
            if(p[i] <= q[i]){
                count ++;
            }
       }
       }
       cout<< count ;

   }
    return 0;
}