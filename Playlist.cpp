/*

 Problem link : https://www.codechef.com/COOK142D/problems/SONGS

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
       x*=3;
       n/=x;
       cout<<n<<endl;

    }


}

//Alhamdulillah..

/*
input :

5
6 1
5 1
11 2
5 8
100 9


output :

2
1
1
0
3


*/








