 #include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
int main()
{
    ll t;
    cin >>t;
    while(t--){
    
       
        ll a,b,c,r, L,R ;
        int s, e;
        cin>>a>>b>>c>>r;
        L = c-r;
        R = c+ r;
        s = max (L, min(a,b));
        e = min(R, max(a,b));
        
       
          cout << max(a,b) - min(a,b) + max(0,s - e)  <<endl;
    }
    return 0;
}