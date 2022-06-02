
/*

 Problem link : https://www.codechef.com/START41D/problems/CCHOCOLATES/

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
       ll a,b,c;
       cin>>a>>b>>c;
       a*=5;
       b*=10;
       a+=b;
       a/=c;
       cout<<a<<endl;
    }

}

//Alhamdulillah..

/*
input :
4
10 10 10
3 1 8
8 1 3
4 4 1000


output :

15
3
16
0

*/





