/*

 Problem link : https://www.codechef.com/START42D/problems/MODULO3/

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
       if(a%3==0 || b%3==0)
       {
           cout<<0<<endl;
           continue;
       }
       ll cnt=0;
       while(1)
       {
           if(a>b)swap(a,b);
           b=b-a;
           cnt++;
           if(b%3==0)
            break;

       }
       cout<<cnt<<endl;
    }


}

//Alhamdulillah..

/*
input :

2
0 343
1 1



output :

0
1



*/















