  #include <bits/stdc++.h>
   using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve(  ll a, ll b ){
     f(b){
     if(a % b == 0){
         cout << 0<<"\n";
         return;
         break;
     }
     else {
         a += 1;
     }
  }
 }
   
 
 

 
 
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll a, b;
   cin >>a>>b ;
    
    
   solve ( a,b );
 
    }
    return 0;
}