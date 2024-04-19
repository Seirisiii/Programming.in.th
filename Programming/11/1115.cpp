#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[1000],y[1000];
int parent[1000];
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
int find_parent(int i){
   if(parent[i]==i)return i;
   return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    u=find_parent(u);
    v=find_parent(v);
    parent[u]=v;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
        parent[i]=i;
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            pq.push({(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]),{i,j}});
        }
    }
    int idx=0;
    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second.first;
        int v=pq.top().second.second;
        pq.pop();
        if(find_parent(u)==find_parent(v))continue;
        union_parent(u,v);
        if(idx==n-k-1){
            cout<<d;
            return 0;
        }
        ++idx;
    }
    return 0;
}