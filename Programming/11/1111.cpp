#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> adj[100001];
int dist[100001];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n-1;++i){
        int x,y,z;
        cin>>x>>y>>z;
        adj[x-1].push_back(y-1,z);
    }
    for(int i=0;i<n;++i){
        for(auto j:adj[i]){
            dist[j.first]=max(dist[j.first],dist[i]+j.second);
            mx=max(dist[j.first],mx);
        }
    }
    cout<<mx;
    return 0;
}
