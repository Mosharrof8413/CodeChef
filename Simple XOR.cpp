/*

 Problem link : https://www.codechef.com/COOK142D/problems/SIMPLE_XOR

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
       ll l,r;
       cin>>l>>r;
       vector<ll>ans;
       for(ll i=l+1;i<=r;i++)
       {
           if((i^(i-1))==1)
           {
               ans.PB(i);
               ans.PB(i-1);
           }
           if(ans.size()==4)break;
       }
       if(ans.size()==4)
       {
           cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
       }
       else cout<<-1<<endl;
    }


}

//Alhamdulillah..

/*
input :

2
1 4
1 100


output :

-1
3 6 9 12


*/














