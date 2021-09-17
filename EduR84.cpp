   #include <bits/stdc++.h>
   using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve(  ll n, ll m ){
    ll sum =0, mx =0, count =0;
    for(ll i=1; i<n;){
            if(i % 2 != 0){
                sum = i;
                 mx += sum;
                if( mx > n){
                    
                    sum = min(sum , mx);
                }
            }
            i += 2;
            count++;
    }
    
  if(count == m){
      if(sum == n){
          cout << "YES"<<"\n";
          return;
      }
      else {
          cout << " NO"<<"\n";
          return;
      }

  }
   
 
 

 
 }
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll n, m;
   cin >>n>>m ;
    
    
   solve ( n,m );
 
    }
    return 0;
}