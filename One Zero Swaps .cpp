#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mk make_pair
int main()
  {
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      string s,t;
      cin>>s>>t;
      ll one=0,zero=0,onet=0,zerot=0;
      for(ll i=0;i<n;i++)
      {
      	if(s[i]=='1')one++;
      	else zero ++;
      	if(t[i]=='1')onet++;
      	else zerot++;
      }
      if(zero!=zerot || one!=onet )
      {
      	cout<<"No"<<endl;
      	continue;
      }
      ll okk=0;
      for(ll i=0;i<n;i++)
      {
      	if(s[i]!=t[i])
      	{
      		if(s[i]=='1')
      		{
      			okk++;

      		}
      		if(s[i]=='0' and okk>0)
      		{
      			okk--;
      		}
      	}
      }
      if(okk==0)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }

//Alhamdulillah...
