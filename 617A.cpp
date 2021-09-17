#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
  void solve(ll arr[] ,   int n ){
    ll  sum =0,cnt =0, temp=0;
     f(n){
        sum += arr[i];
     }
     if(sum % 2 == 1){ 
     cout << " YES"<<"\n";
     return;
     }
     else{ 
       f(n){
           if(arr[i] % 2 == 0){
               cnt++;
           }
           else{
               temp ++;
           }
       }
       if( cnt > 0 && temp > 0){
          cout<<"YES"<<"\n";
       }
       else{
           cout<<"NO"<<"\n";
       }
     }    

      return;
 }
 
int main()
{
     int n ;
     cin >> n ;
     ll arr[n];
     f(n){
         cin>>arr[i];
     }
     solve(arr , n);
        
              
         
          
    return 0;
}