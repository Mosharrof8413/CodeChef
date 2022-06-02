/*

 Problem link : https://www.codechef.com/START41D/problems/PATHPAR/

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
       ll n,k;
       cin>>n>>k;
       if(n%2)
       {
           if(k%2)cout<<"YES"<<endl;
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

4
1 0
2 0
2 1
3 1


output :

No
Yes
Yes
Yes

*/






