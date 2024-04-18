#include<bits/stdc++.h>
using namespace std;
int m;
int ii,jj;
int arr[20][20];
queue<pair<int,int>> q;
bool visited[20][20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>jj>>ii;
    --ii,--jj;
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }    
    int res=arr[ii][jj];
    q.push({ii,jj});
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        res=max(arr[i][j],res);
        if(i-1>=0)if(arr[i-1][j]>arr[i][j] and arr[i-1][j]!=100)q.push({i-1,j});
        if(i+1<m)if(arr[i+1][j]>arr[i][j] and arr[i+1][j]!=100)q.push({i+1,j});
        if(j-1>=0)if(arr[i][j-1]>arr[i][j] and arr[i][j-1]!=100)q.push({i,j-1});
        if(j+1<m)if(arr[i][j+1]>arr[i][j] and arr[i][j+1]!=100)q.push({i,j+1});
    }
    cout<<res;
    return 0;
}