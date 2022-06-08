/*

 Problem link : https://www.codechef.com/COOK142D/problems/ADVANCE

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
       ll x,y;
       cin>>x>>y;
       if(y>=x && y<=x+200)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }


}

//Alhamdulillah..

/*
input :

5
1300 1500
1201 1402
300 4000
723 805
1330 512


output :

YES
NO
NO
YES
NO

*/







