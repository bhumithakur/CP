 #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; 
    cin >>t;
    while(t--){
        ll a, b ;
        cin >>a>>b;
        ll p = a+b;
        if( a== b)
            cout << "0"<<"\n";
        
         if( a > b)
         swap(a,b);
     
     
        for( int i=1;i< p ; i++){ 
             a += i;
         if(a >= b && (a+b)% 2 == 0){
         cout << i << "\n";
     }
       
        }    
     
    }
    
    return  0;
}