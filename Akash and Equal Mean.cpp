/*
 Problem : https://www.codechef.com/APRIL222C/problems/CHFMIST

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2; i<=sq; i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        //ll a[n];
        map<double,ll>mp;
        vector<double>v;
        double sum=0;
        double x;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
            sum+=x;
            v.PB(x);
        }
        double div=sum/n;
        ll ans=0;
        if(mp[v[0]]==n)
        {
            ll okk=n*(n-1)/2;
            cout<<okk<<endl;
            continue;
        }
        for(ll i=0; i<n; i++)
        {
            ans+=(mp[v[i]])*(mp[div*2-v[i]]);
            mp[v[i]]=0;
            mp[div*2-v[i]]=0;
            //cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }


}

//Alhamdulillah..


/*
input:

3
4
1 3 5 7
4
1 7 7 7
6
1 1 1 1 1 1



Output:

2
0
15




*/





