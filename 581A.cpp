 #include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int t;
t=1;
while(t--){
	string s;
	cin>>s;
	ll len=s.size(),count=1;
	while(len>=3){
	  if(len ==3&&s[1]!='1'&&s[2]!='1')
	  	break;
      count++;
      len -=2;
	}
	if(s.size()==1)
	 cout<<"0"<<endl;
	else
	 cout<<count<<endl;
}
    return 0;
} 
   
        
   