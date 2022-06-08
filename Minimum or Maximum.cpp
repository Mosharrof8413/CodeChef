/*

 Problem link : https://www.codechef.com/START42D/problems/MINORMAX/

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
        ll n;
        cin>>n;
        //ll mx=0;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            //mx=max(mx,v[i]);
        }

        ll mn=v[0],mx=v[0];

        bool f=true;
        for(ll i=0;i<n;i++)
        {
            if(v[i]<=mn )
            {
                if(v[i]<mn)mn=v[i];
                //if(v[i]>mx)mx=v[i];
            }
            else if(v[i]>=mx)
            {
                mx=v[i];
            }
            else
            {
                f=false;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}

//Alhamdulillah..

/*
input :

3
1
343
4
1 1 2 3
3
1 3 2



output :

YES
YES
NO


*/















