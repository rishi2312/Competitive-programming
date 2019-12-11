#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define mp make_pair
#define f first
#define ll long long
#define s second
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/*
    Problem Statement -> https://www.spoj.com/problems/TRT/
*/

using namespace std;

typedef pair<int,int> pii;

vector<int> v;
vector<vector<int>> dp;
int n;
int profit(int start,int end)
{
    if(start>end)
        return 0;
    if(dp[start][end]!=-1)
        return dp[start][end];
    int age = n - (end - start +1)+1;
    return dp[start][end] = max(profit(start+1,end)+age*v[start],profit(start,end-1)+age*v[end]);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    cin>>n;
    v = vector<int>(n+1);
    for(int i=0;i<n;i++)
        cin>>v[i];
//    for(int i=0;i<n;i++)
//        cout<<v[i]<<endl;
    dp = vector<vector<int>>(n+1,vector<int>(n+1,-1));
    cout<<profit(0,n-1);//<<endl;
//    for(int i=0;i<n;i++)
//    {
//
//        for(int j=0;j<n;j++)
//            cout<<dp[i][j]<<" ";
//        cout<<endl;
//    }
}

