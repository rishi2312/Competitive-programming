#include<bits/stdc++.h>
#define ll long long int

// https://www.spoj.com/problems/COINS/

using namespace std;

map<ll,ll> m;

ll coins(ll n)
{
    if(n==0)
        return 0;
    else if(!m[n])
        m[n] = max(n,coins(n/2)+coins(n/3)+coins(n/4));
    return m[n];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    int x;
    while(cin>>x)
    {
        cout<<coins(x)<<endl;
    }
}
