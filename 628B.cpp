   #include <bits/stdc++.h>
   using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   set<int> st;
   ll n;
   cin >>n;
   f(n){
       ll x;
       cin >>x;
       st.insert(x);
   }
    
   for(auto i: st ){
       cout<<i<<"\n";
   }
 
    }
    return 0;
}