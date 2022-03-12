/*
 Problem : https://www.codechef.com/MARCH221C/problems/CHFCLASS

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
         ll n;
         cin>>n;
         n++;
         ll ans=n/7;
         cout<<ans<<endl;
      }
}

//Alhamdulillah..


/*
4
5
6
8
22


Output:

0
1
1
3


*/



