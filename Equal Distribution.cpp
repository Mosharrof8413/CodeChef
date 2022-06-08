/*

 Problem link : https://www.codechef.com/START42D/problems/EQUALDIST/

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
       ll a,b;
       cin>>a>>b;
       a+=b;
       if(a%2==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }


}

//Alhamdulillah..

/*
input :

4
1 1
1 3
1 2
1 4


output :

YES
YES
NO
NO

*/















