 #include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define max std::max
#define min std::min
int main()
{
    ll t;
    cin >>t;
    while(t--){
    ll r,b, g;
    cin >>r>>b>>g;
    if(r +b == g || b +g == r || g + r == b ){
        cout << "YES"<<endl;
    }
    else {
        cout <<"NO"<<endl;
    }
    
         
    }
    return 0;
}