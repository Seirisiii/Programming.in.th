#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[30][30];
bool visited[30][30];
int mx;
int dfs(int i,int j){
    if(visited[i][j])return 0;
    visited[i][j]=true;
    int cnt=1;
    if(!visited[i+1][j] and i+1<n)cnt+=dfs(i+1,j);
    if(!visited[i-1][j] and i-1>=0)cnt+=dfs(i-1,j);
    if(!visited[i][j+1] and j+1<m)cnt+=dfs(i,j+1);
    if(!visited[i][j-1] and j-1>=0)cnt+=dfs(i,j-1);
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='#'){
                visited[i][j]=true;
                if(i+1<n)visited[i+1][j]=true;
                if(i-1>=0)visited[i-1][j]=true;
                if(j+1<m)visited[i][j+1]=true;
                if(j-1>=0)visited[i][j-1]=true;
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(!visited[i][j])mx=max(dfs(i,j),mx);
        }
    }
    cout<<mx;
    return 0;
}
