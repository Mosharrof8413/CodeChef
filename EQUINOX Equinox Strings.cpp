#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define pb push_back
#define ll long long
#define mk make_pair
#define endl '\n'
#define M  1000000007
ull dp[101][101];
ull nCr(ull n,ull r)
{
    if(n==r)return dp[n][r]=1;
    if(r==1)return dp[n][r]=n;
    if(r==0)return dp[n][r]=1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}

ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
    ll a,b,c;
    cin>>a>>b>>c;
    ll sar=0,ano=0;
    for(ll i=0;i<a;i++)
    {

        string st,s="EQUINOX";
        cin>>st;
        map<char,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

            if(mp[st[0]])sar+=b;
            else ano+=c;
    }
    if(sar>ano)cout<<"SARTHAK"<<endl;
    else if(sar<ano)cout<<"ANURADHA"<<endl;
    else cout<<"DRAW"<<endl;


   }

}



/*
Alhamdulillah
*/


