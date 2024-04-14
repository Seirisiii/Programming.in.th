#include<bits/stdc++.h>
using namespace std;
int n;
int mx=INT_MIN;
int dp[300000];
vector<int> adj[300000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        if(u>v)swap(u,v);
        adj[u-1].push_back(v-1);
    }
    for(int i=0;i<n;++i){
        dp[i]=1;
    }
    for(int i=0;i<n;++i){
        for(auto j:adj[i]){
            dp[j]=max(dp[j],dp[i]+1);
            mx=max(dp[j],mx);
        }
    }
    cout<<mx;
    return 0;
}
