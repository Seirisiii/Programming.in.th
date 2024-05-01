#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<char,int>> adj['z'+5];
queue<char> q;
bool visited['z'+5];
vector<pair<char,pair<char,double>>> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        char u,v;
        int c;
        cin>>u>>v>>c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    }
    q.push('X');
    while(!q.empty()){
        char u=q.front();
        q.pop();
        if(u=='Y')break;
        if(visited[u])continue;
        visited[u]=true;
        vector<int> v;
        for(auto i:adj[u]){
            if(!visited[i.first]){
                if(q.empty())q.push(i.first);
                v.push_back(i.second);
            }
        }
        if(v.empty()){
            cout<<"broken";
            return 0;
        }
        sort(v.begin(),v.end());
        char c=q.front();
        if(v.size()%2==0)res.push_back({u,{c,((double)v[v.size()/2-1]+(double)v[v.size()/2])/2.0}});
        else res.push_back({u,{c,(double)v[v.size()/2]}});
    }
    double sum=0;
    for(auto i:res){
        char u=i.first;
        char v=i.second.first;
        double w=i.second.second;
        printf("%c %c %.1lf\n",u,v,w);
        sum+=w;
    }
    printf("%.1lf",sum);
    return 0;
}