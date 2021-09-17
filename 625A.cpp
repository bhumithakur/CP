#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
   void solve(  ll a[], ll b[] , ll n ){
      ll sum1 =0;
      ll sum2 =0;
      f(n){
          cin >>b[i];
          if(a[i] == b[i]){
              a[i] = 0;
              b[i] = 0;
          }
          else if(a[i] == 1) {
            sum1++;
          }
          else {
              sum2++;
          }
      }
      if(sum1 == sum2)
      cout <<-1<<"\n";
      else
      cout << sum1/sum2 + 1<<"\n";
      return;
 }
 
int main()
{
   ll n;
   cin >>n;
   ll a[n], b[n];
   f(n){
       cin >> a[i];
   } 
   solve ( a,b, n);
          
    return 0;
}