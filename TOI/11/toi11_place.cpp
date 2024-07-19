#include<bits/stdc++.h>
using namespace std;
int n,m;
priority_queue<tuple<long long,int,int>> pq;
int parent[200000];
long long cost;
int find_parent(int i){
    if(i==parent[i])return i;
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
    cin>>n>>m;
    for(int i=0;i<n;++i){
        parent[i]=i;
    }
    for(int i=0;i<m;++i){
        int s,d,l;
        cin>>s>>d>>l;
        --s,--d;
        pq.emplace(l,s,d);
    }
    while(!pq.empty()){
        auto [l,s,d]=pq.top();
        pq.pop();
        if(find_parent(s)==find_parent(d))continue;
        union_parent(s,d);
        cost+=l;
    }
    cout<<cost-n+1;
    return 0;
}