  #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll  t;
      cin >>t;
      while(t--){
          ll a, b, count = 1;
          cin >> a>>b;
          ll c = a+b;
          if(a == b){
              cout <<"0"<<endl;
          }
          for(ll i =a; i< (a+b); i+5){
              if((c - i) > 5){
                  count ++;
              }
              
              else {
                  count;
              }
          }
          cout << count <<endl;
      }
return 0;
}