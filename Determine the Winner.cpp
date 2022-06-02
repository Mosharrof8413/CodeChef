
/*

 Problem link : https://www.codechef.com/START41D/problems/WINNERR/

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
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       ll p=max(a,b);
       ll q=max(c,d);
       if(p<q)cout<<"P"<<endl;
       else if(p>q)cout<<"Q"<<endl;
       else cout<<"TIE"<<endl;
    }

}

//Alhamdulillah..

/*
input :

4
5 10 2 12
10 30 15 15
20 8 4 20
6 6 6 6


output :

P
Q
TIE
TIE

*/





