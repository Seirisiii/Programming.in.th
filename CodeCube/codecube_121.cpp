#include<bits/stdc++.h>
using namespace std;
int n,m;
int p[100001];
priority_queue<tuple<int,int,int>> pq;
int parent[100001];
int cost;
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
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>p[i];
        parent[i]=i;
    }
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        pq.emplace(-(p[a]+p[b]),a,b);
    }
    while(!pq.empty()){
        int d=-get<0>(pq.top());
        int s=get<1>(pq.top());
        int t=get<2>(pq.top());
        pq.pop();
        if(find_parent(s)==find_parent(t))continue;
        union_parent(s,t);
        cost+=d;
    }
    cout<<cost;
    return 0;
}
