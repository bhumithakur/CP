#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
  void solve( ll a, ll b ){
    if(a == b){
        cout <<0 <<"\n";
    }
    else if(  a>b &&  (abs(a -b )%2 == 0) || a<b && (abs(a -b )%2 != 0)){
        cout <<1<<"\n";
    }
    else{
        cout << 2<<endl;
    }
          

      return;
 }
 
int main()
{
   ll t;
    cin >>t;
      while(t--){
    ll a, b;
     cin >>a>>b;
     solve( a,b);
        
              
      }     
          
    return 0;
}