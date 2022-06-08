/*

 Problem link : https://www.codechef.com/COOK142D/problems/FIRSTANDLAST

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
        ll a[n+2];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll sum=a[0]+a[n-1];
        for(ll i=0;i<n-1;i++)
        {
            ll cur_sum=a[i]+a[i+1];
            if(cur_sum>sum)
            {
                sum=cur_sum;
            }
        }
        cout<<sum<<endl;

    }


}

//Alhamdulillah..

/*
input :

3
2
5 8
3
5 10 15
4
4 4 4 4



output :

13
25
8


*/









