 #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
  void solve(string s,ll n, ll a, ll b){
      ll ans, count =0;
        if(b >= 0){
      ans = a*n + b*n;
      cout << ans<<"\n";
        }
        else{
            for(int i =0; i<n; i++){
              if(s[i] != s[i+1]){
                  count++;
              }  
            }
           ans = a*n + (count/2 + 1);
           cout << ans<<"\n"; 
        }
       
       
 }
 
int main()
{
      ll t;
     cin >>t;
     while(t--){
          ll n, a,b;
         cin >>n>>a>>b;
         string s;
         cin >>s;
        solve(s, n, a, b);
     }
     
        
              
         
          
    return 0;
}