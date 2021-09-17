 #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve(  ll a[],ll n ){
     ll len =1, mx=1;
 for(int i =1; i<n; i++){
if(a[i] > a[i-1]){
len++;
}
if(mx < len){
    mx = len;
}
 }
 cout << mx <<endl;
  
 
 
 
 }
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll n,sum;
   cin >>n>>sum;
    
    
   solve ( n,sum);
 
    }
    return 0;
}
  #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
  
   
 
 void  solve(  ll n, ll sum){
 
  if(n == 1){
      cout<<sum<<"\n";
      return;
  }
else if(sum == 1){
    cout<<0<<"\n";
    return;
}
else if(n% 2 == 0  ){
      if(sum%2 == 0){
         double k = static_cast<float>(sum)/static_cast<float>( n) ;
         cout<<ceil(k)<<"\n";
         return
   
      }
      else{
          cout<<sum/n<<endl;
          return;
      }
    
 
}
else {
    double p = static_cast<float>(n)/static_cast<float>( 2) ;
     cout<< ceil(p)<<endl;
    return;
}
  
 
 
 
 }
 
int main()
{
    ll t;
    cin >>t;
    while(t--){
         
   ll n ;
   cin >>n ;
    ll a[n];
    f(n){
        cin >>a[i];
    }
    
   solve ( a,n );
 
    }
    return 0;
}
 