#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
int main()
{
    ll t;
    cin >>t;
    while(t--){
        ll n, count =0 , mx=0;
         cin >>n;
         string s;
         cin >>s;
         bool k = false ;
         for(int i=n-1; i>=0; i--){
             if(s[i] == 'A'){
                 if( k == false){
                     k = true;
                 }
                 else {
                     mx = max(count, mx);
                     count =0;
                 }
             }
             else{
                 if(k)
                 count ++;
             }
         }
         if(k) 
          mx = max(count, mx);
          cout << mx <<"\n";
        
    }
    return 0;
}