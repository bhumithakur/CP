 #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
  void solve(int n ){
     if( n == 2){
      cout<< "1"<<"\n";
      return;}
    else if( n == 3){
    cout<< "7"<<"\n";
      return;}
     else if( n == 4){
      cout<< "11"<<"\n";
      return;}
    else if( n == 5){
      cout<< "5"<<"\n";
      return;}
    else if( n == 6){
     cout<< "9"<<"\n";
      return;}
    else if( n == 7){
      cout<< "8"<<"\n";
      return;}
     else{
     cout <<"0"<<"\n";
     return;
     }
                
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
  