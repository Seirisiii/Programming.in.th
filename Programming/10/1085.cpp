#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<int> adj[500000];
bool pass[500000];
bool check;
bool visited[500000];
int mx;
void dfs(int u){
    if(u==n-1)check=true;
    mx=max(mx,u);
    visited[u]=true;
    for(auto i:adj[u]){
        if(visited[i])continue;
        dfs(i);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
    }
    for(int i=0;i<k;++i){
        int x;
        cin>>x;
        pass[x-1]=true;
    }
    for(int i=0;i<n-1;++i){
        if(pass[i])continue;
        adj[i].push_back(i+1);
    }
    dfs(0);
    if(check)cout<<1;
    else cout<<0<<" "<<mx+1;
    return 0;
}