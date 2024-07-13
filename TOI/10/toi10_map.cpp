#include<bits/stdc++.h>
using namespace std;
int m,n;
vector<tuple<int,int,int>> adj[40000];
pair<int,int> position[40000];
bool visited[40000];
int ii,jj;
int res[200][200];
void dfs(int u){
    visited[u]=true;
    for(auto [v,i,j]:adj[u]){
        if(visited[v])continue;
        int ni=position[u].first+i;
        int nj=position[u].second+j;
        position[v]={ni,nj};
        dfs(v);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m*n-1;++i){
        int u,v;
        char c;
        cin>>u>>c>>v;
        if(c=='U'){
            adj[u].emplace_back(v,1,0);
            adj[v].emplace_back(u,-1,0);
        }
        else if(c=='L'){
            adj[u].emplace_back(v,0,1);
            adj[v].emplace_back(u,0,-1);
        }
    }
    position[0]={0,0};
    dfs(0);
    for(int i=0;i<m*n;++i){
        ii=min(ii,position[i].first);
        jj=min(jj,position[i].second);
        //cout<<position[i].first<<" "<<position[i].second<<"\n";
    }
    for(int i=0;i<m*n;++i){
        int ni=position[i].first-ii;
        int nj=position[i].second-jj;
        res[ni][nj]=i;
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}