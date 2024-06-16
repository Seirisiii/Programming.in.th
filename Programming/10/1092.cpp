#include<bits/stdc++.h>
using namespace std;
int n,m;
int sol[100000];
int parent[100000];
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
int union_parent(int u,int v){
    u=find_parent(u);
    v=find_parent(v);
    if(u==v)return -2;
    else if(sol[u]==sol[v]){
        if(u>v){
            sol[v]+=sol[u]/2;
            parent[u]=v;
            return v;  
        }
        else if(u<v){
            sol[u]+=sol[v]/2;
            parent[v]=u;
            return u;  
        }
    }
    else if(sol[u]>sol[v]){
        sol[u]+=sol[v]/2;
        parent[v]=u;
        return u;  
    }
    else if(sol[u]<sol[v]){
        sol[v]+=sol[u]/2;
        parent[u]=v;
        return v; 
    }
    return -2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>sol[i];
        parent[i]=i;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        --a,--b;
        cout<<union_parent(a,b)+1<<"\n";
    }
    return 0;
}