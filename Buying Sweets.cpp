/*
 Problem : https://www.codechef.com/START36C/problems/BUYSWEET

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


int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        ll price[n],cashback[n];
        for(ll i=0; i<n; i++)
        {
            cin>>price[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>cashback[i];
        }
        pair<ll,ll>vp;
        vector<pair<ll,pair<ll,ll> > > p;
        for(ll i=0; i<n; i++)
        {
            ll d=price[i]-cashback[i];
            vp= {price[i],cashback[i]};
            p.PB({d,vp});
        }

        sort(p.begin(),p.end());
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            ll pri=p[i].S.F;
            ll cback=p[i].S.S;
            ll d=p[i].F;
             while(pri<=r)
                {
                    cnt+=r/pri;
                    ll times=r/pri;
                    r=r%pri;
                    r+=cback*times;
                }
            //cout<<pri<<" "<<cback<<" "<<d<<endl;
        }
        cout<<cnt<<endl;
    }

}

//Alhamdulillah..


/*
input :

3
3 3
2 3 4
1 1 1
2 4
5 4
1 2
4 10
4 4 5 5
1 2 4 2


Output:

2
1
7

*/





