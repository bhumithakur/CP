   #include <bits/stdc++.h>

 #include <boost/math/common_factor.hpp>
 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve(  ll n ){
 
   ll a, b;
   f(n){
       a = i;
       b = n - i;
       if(boost:math:lcm(a,b) + __gcd(a,b) == n){
           cout << a<<" "<<b<<"\n";
           return;
       }
   }
  
 
 
 
 }
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll n;
   cin >>n ;
    
    
   solve ( n );
 
    }
    return 0;
}
 