#include<bits/stdc++.h>
using namespace std;
int n,m;
int X,Y,Z;
int x[10],y[10],z[10];
int M[10],K[10],C[10];
bool visited[10];
int dfs(int i,int mm,int kk,int cc){
    if(mm<=0 and kk<=0 and cc<=0)return 0;
    int mn=1e9;
    for(int j=0;j<m;++j){
        if(visited[j])continue;
        visited[j]=true;
        int dist=0;
        if(i==-1)dist=(X-x[j])*(X-x[j])+(Y-y[j])*(Y-y[j])+(Z-z[j])*(Z-z[j]);
        else dist=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
        mn=min(mn,dist+dfs(j,mm-M[j],kk-K[j],cc-C[j]));
        visited[j]=false;
    }
    return mn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>X>>Y>>Z;
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>x[i]>>y[i]>>z[i];
        cin>>M[i]>>K[i]>>C[i];
    }
    cout<<dfs(-1,n,n,n);
    return 0;
}