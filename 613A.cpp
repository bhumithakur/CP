#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
int main()
{
    
        ll n, count =0 ,tp = 0, mx=0;
         cin >>n;
         string s;
         cin >>s;
         for(ll i=0; i<n; i++){
             if(s[i] == 'L')
              tp++;
              else{
                  mx++;
              }
         }
         for(ll i= (-1)*tp; i<=mx;i++){
             count++;
         }
         cout<<count<<"\n";
          
    return 0;
} 