#include<bits/stdc++.h>
using namespace std;
int n,m;
int dist[500][500];
vector<int> adj[1000000];
int q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            dist[i][j]=INT_MAX;
        }
    }
    for(int i=0;i<m;++i){
        int s;
        cin>>s;
        for(int j=0;j<s;++j){
            int ss;
            cin>>ss;
            adj[ss-1].push_back(i);
        }
        dist[i][i]=0;
    }
    for(int i=0;i<n;++i){
        for(auto j:adj[i]){
            for(auto k:adj[i]){
                if(j!=k)dist[j][k]=1;
            }
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            for(int k=0;k<m;++k){
                if(dist[j][i]==INT_MAX or dist[i][k]==INT_MAX)continue;
                dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
            }
        }
    }
    cin>>q;
    while(q--){
        int a,b,curr=INT_MAX;
        cin>>a>>b;
        --a,--b;
        for(auto i:adj[a]){
            for(auto j:adj[b]){
                curr=min(curr,dist[i][j]);
            }
        }
        curr==INT_MAX?cout<<"impossible\n":cout<<curr<<"\n";
    }
    return 0;
}
