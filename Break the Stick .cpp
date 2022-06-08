/*

 Problem link : https://www.codechef.com/COOK142D/problems/BREAKSTICK

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
        ll n,x;
        cin>>n>>x;
        if(x%2==0)
        {
            ll re=n-x;
            if(re%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
           cout<<"YES"<<endl;
        }
    }


}

//Alhamdulillah..

/*
input :

3
6 1
3 2
4 3


output :

YES
NO
YES


*/












