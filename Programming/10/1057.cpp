#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> adj[1000];
bool visited[1000];
bool ans;
void dfs(int u){
    visited[u]=true;
    for(auto i:adj[u]){
        if(visited[i]){
            ans=true;
            return ;
        }
        else dfs(i);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        for(int j=0;j<k;++j){
            int a;
            cin>>a;
            adj[i].push_back(a-1);
        }
    }
    for(int i=0;i<n;++i){
        ans=false;
        for(int j=0;j<n;++j){
            visited[j]=false;
        }
        dfs(i);
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
