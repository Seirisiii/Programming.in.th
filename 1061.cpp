#include<bits/stdc++.h>
using namespace std;
int m;
int ii,jj;
int arr[20][20];
int dfs(int i,int j){
    int res=arr[i][j];
    if(i-1>=0)if(arr[i-1][j]>arr[i][j] and arr[i-1][j]!=100)res=max(dfs(i-1,j),res);
    if(i+1<m)if(arr[i+1][j]>arr[i][j] and arr[i+1][j]!=100)res=max(dfs(i+1,j),res);
    if(j-1>=0)if(arr[i][j-1]>arr[i][j] and arr[i][j-1]!=100)res=max(dfs(i,j-1),res);
    if(j+1<m)if(arr[i][j+1]>arr[i][j] and arr[i][j+1]!=100)res=max(dfs(i,j+1),res);
    return res;
}
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
    cout<<dfs(ii,jj);
    return 0;
}