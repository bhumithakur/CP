    #include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t ;
    cin >>t ;
while(t--){
    ll n,  abslt,count = 1;
    
    cin >> n;
    ll arr[n];
    
    for( ll i=0; i<n; i++){
        cin>> arr[i];

    }
     for( ll i=0; i<n; i++){
        for( ll j =  0; j<n; j++){
           abslt = abs(arr[i] - arr[j]);
            if(abslt == 1){
                 count ++;
            }
            else{
                count;
            }
           
             




        }
    }
    if(count == 1){
        cout <<"1"<<endl;
    }
    else {
        cout <<"2"<<endl;
    }
}   
    return 0;
}