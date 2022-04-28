/*
 Problem : https://www.codechef.com/START36C/problems/BIRDFARM

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
        ll x,y,z;
        cin>>x>>y>>z;
        if(z%x==0 && z%y!=0)
            cout<<"CHICKEN"<<endl;
        else if(z%y==0 && z%x!=0)
            cout<<"DUCK"<<endl;
        else if(z%x==0 && z%y==0)
            cout<<"ANY"<<endl;
        else cout<<"NONE"<<endl;
    }

}

//Alhamdulillah..


/*
input :

3
2 3 5
2 2 2
3 4 6

Output:

NONE
ANY
CHICKEN



*/



