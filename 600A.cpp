 #include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ll t;
    cin >> t ;
    while(t--){
        ll n;
        cin >>n;
        ll a[n], b[n];
        for( ll  i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
     for(int i=0; i<n; i++){
        if( (a[i] - b[i]) == n/n-2){
               cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
     }
    

    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
     ll t;
    cin >> t ;
    while(t--){
        ll n;
        cin >>n;
        ll a[n], b[n];
        for( ll  i=1; i<=n; i++){
            cin >> a[i];
        }
        for(ll i=1; i<=n; i++){
            cin >> b[i];
            b[i] -= a[i];
        }
        ll  count=0;
         ll temp = n/(n-3);
     
     
     
     for(ll i=1; i<=n; i++){
         if(b[i]<0) {
		 cout<<"NO"<<endl;
		 break;
			 
		}
		 if(b[i-1]==0&&b[i]!=0)
			count++;
		if(b[i-1]&&b[i]&&b[i-1]!=b[i]) {
			cout<<"NO"<<endl;
			break;
		}
     }
    
    if(count < 2){
        cout <<"YES"<<endl;
    }
    else {
        cout << "NO"<<endl;
    }
      

    }
       
    

    
    return 0;
}