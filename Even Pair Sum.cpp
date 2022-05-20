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
 	ll a,b;
 	cin>>a>>b;
 	ll odd=0,odd1=0,even=0,even1=0;
 	if(a%2)
 	{
 		odd=(a/2)+1;
 		even=a/2;
 	}
 	else odd=a/2,even=a/2;
 	if(b%2)
 	{
 	  	odd1=(b/2)+1;
 		even1=b/2;
 	}
 	else odd1=b/2,even1=b/2;
 	ll ans=(odd*odd1)+(even*even1);
 	cout<<ans<<endl;
 }
}

//Alhamdulillah...
