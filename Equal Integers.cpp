/*

 Problem link : https://www.codechef.com/START41D/problems/INCREAR/

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
        if(x==y)cout<<0<<endl;
        else if(x>y)
        {
            ll dif=x-y;
            if(dif%2)
            {
                dif/=2;
                dif+=2;
            }
            else dif/=2;

            cout<<dif<<endl;
        }
        else cout<<y-x<<endl;
    }

}

//Alhamdulillah..

/*
input :

5
3 4
5 5
7 3
5 2
7 12


output :

1
0
2
3
5

*/






