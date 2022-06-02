/*

 Problem link : https://www.codechef.com/START41D/problems/ISPAR/

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
       ll ans=0;
       if(k==1)ans=n;
       else if(k%2 || k==2)ans=k-1;
       else ans=2;
       if(ans%2)cout<<"ODD"<<endl;
       else cout<<"EVEN"<<endl;
    }

}

//Alhamdulillah..

/*
input :

4
4 1
3 3
9 1
3489601027782 8104267

output :

EVEN
EVEN
ODD
EVEN

*/





