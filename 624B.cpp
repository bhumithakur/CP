#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
  int solve(  ll arr[],  ll p[], ll n , ll m){
      ll cnt =0;
    f(n){
      if(arr[i] > arr[i+1] &&  std::find( p, p+m,arr[i])  || std::find( p, p+m,arr[i+1])){
         swap(arr[i],arr[i+1]);
      }

    }
      f(n){
          if(arr[i] > arr[i+1])
          cnt++;
         
      }  
      if(cnt == 0){
          cout <<"YES"<<"\n";
      } 
      else {
          cout << "NO"<<"\n";
      }   


      return 0;
 }
 
int main()
{
   ll t;
    cin >>t;
      while(t--){
    ll n, m;
     cin >>n>>m;
     ll arr[n], p[m];
     f(n){
         cin >>arr[i];
     }
     f(m){
         cin >> p[i];
     }
     solve( arr, p ,n,m);
        
              
      }     
          
    return 0;
}