  #include <bits/stdc++.h>
   using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve( ll a[], ll n, ll x ){
      ll arr[n] ={0} ;
      for(ll k=n+x; k>0; k--){
          ll v=0;
          for(ll i = 1; i<=k; i++)
          if(!arr[i] ){
              v++;
          }
           if(v <= x){
          cout<<v<<"\n";
          return;
      }
      }
     
 }
   
 
 

 
 
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll n, x;
   cin >>n>>x ;
   ll a[n];
   f(n){
     cin >> a[i];
   }
   
    
    
   solve ( a,n,x );
 
    }
    return 0;
}