#include<bits/stdc++.h>
using namespace std;
int m;
int x,y;
int arr[20][20];
bool visited[20][20];
queue<pair<int,int>> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>x>>y;
    --x,--y;
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            if(arr[i][j]==100)visited[i][j]=true;
        }
    }
    int res=arr[y][x];
    q.push({y,x});
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        res=max(arr[i][j],res);
        if(i-1>=0)if(arr[i-1][j]>arr[i][j] and !visited[i-1][j])q.push({i-1,j});
        if(i+1<m)if(arr[i+1][j]>arr[i][j] and !visited[i+1][j])q.push({i+1,j});
        if(j-1>=0)if(arr[i][j-1]>arr[i][j] and !visited[i][j-1])q.push({i,j-1});
        if(j+1<m)if(arr[i][j+1]>arr[i][j] and !visited[i][j+1])q.push({i,j+1});
    }
    cout<<res;
    return 0;
}