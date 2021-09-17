#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
 int solve(int n ){
     if( n == 2)
     return 1;
     if( n == 3)
     return 7;
     if( n == 4)
     return 11;
     if( n == 5)
     return 5;
     if( n == 6)
     return 9;
     if( n == 7)
     return 8;
      
        return 0;        
 }
 
int main()
{
     
         ll t;
         cin >>t;
         while(t--){
               int n;
               cin >>n;
               solve(n);
                
              
         }
          
    return 0;
}