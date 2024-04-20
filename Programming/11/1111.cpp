#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> adj[100001];
queue<pair<int,int>> q;
bool visited[100001];
int dfs(int d,int u){
    int ans=-1;
    visited[u]=true;
    ans=max(ans,d);
    for(auto i:adj[u]){
        if(visited[i.first])continue;
        ans=max(ans,dfs(d+i.second,i.first));
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n-1;++i){
        int x,y,z;
        cin>>x>>y>>z;
        adj[x-1].push_back({y-1,z});
        adj[y-1].push_back({x-1,z});
    }
    cout<<dfs(0,0);
    return 0;
}
