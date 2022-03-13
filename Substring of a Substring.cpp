/*
 Problem : https://www.codechef.com/MARCH221C/problems/SUBSTRING

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


vector<ll>v;

int main()
{
    optimize();

      ll t;
      cin>>t;
      while(t--)
      {
        string st;
        cin>>st;
        ll cnt=0,ans=0;
        if(st.size()<2)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=1;i<st.size()-1;i++)
        {
            if(st[i]!=st[0] && st[i]!=st[st.size()-1])cnt++;
            else
            {
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        ans=max(ans,cnt);
        if(ans)cout<<ans<<endl;
        else cout<<-1<<endl;
      }
    }

//Alhamdulillah..


/*
2
abcdab
aaa

Output:

2
-1


*/


