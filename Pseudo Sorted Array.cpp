/*
 Problem : https://www.codechef.com/APRIL222C/problems/PSEUDOSORT

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

const ll MX=2e6+123;
bitset<MX>is_prime;
vector<ll>primes;
ll solve(ll n)
{
    ll sq=sqrt(n);
    for(ll i=2;i<=sq;i++)
    {
        if(n%i==0)return 1;
    }
    return 0;
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2],b[n+2];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=0;
        for(ll i=0;i<n-1;i++)
        {
           if(a[i]>a[i+1])
           {
               swap(a[i],a[i+1]);
               break;
           }
        }
        if(is_sorted(a,a+n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}

//Alhamdulillah..


/*
input:

3
5
3 5 7 8 9
4
1 3 2 3
3
3 2 1


Output:

YES
YES
NO





*/




