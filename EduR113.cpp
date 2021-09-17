 #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
 #define f(n) for(int i=0; i<n; i++)
 #define   float  static_cast<float>(d)/static_cast<float>(x+1) 
   void solve(string s,ll n ){
      ll c,d,cnt;
         if( n == 1){
             cout << -1 <<" "<< -1<<"\n";
         }
          else{
               c = count(s.begin(),s.end(),'a');
             d = count(s.begin(),s.end(),'b');
        
        if( c == d){
           cout << "1"<<" "<<n<<endl;
           return;
        }
        else{
            for (int i = 0; i < n; i++){
		for (int len = 1; len <= n - i; len++){
			 string p = s.substr(i, len) ;
			  
        ll   e = count(p.begin(),p.end(),'a');
         ll    f = count(p.begin(),p.end(),'b');
             if(e == f){
              cout << i << " "<<len<<"\n";
              return;
              break;
		}
        }
        }
         
        }     
          }   
 }
 
int main()
{
      ll t;
     cin >>t;
     while(t--){
          ll n ;
         cin >>n ;
         string s;
         cin >>s;
        solve(s, n );
     }
     
        
              
         
          
    return 0;
}