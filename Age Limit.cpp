/*

 Problem link : https://www.codechef.com/START42D/problems/AGELIMIT/

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
       ll x,y,a;
       cin>>x>>y>>a;
       if(a>=x && a<y)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


}

//Alhamdulillah..

/*
input :

5
21 34 30
25 31 31
22 29 25
20 40 15
28 29 28


output :

YES
NO
YES
NO
YES



*/















