#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int arr[100][100];
bool visited[100][100];
char solve(int i,int j){
    if(visited[i][j])return 'A';
    if(i==-1)return 'N';
    else if(j==-1)return 'W';
    else if(i==m)return 'S';
    else if(j==n)return 'E';
    visited[i][j]=true;
    if(arr[i][j]==1)return solve(i-1,j);
    else if(arr[i][j]==2)return solve(i,j+1);
    else if(arr[i][j]==3)return solve(i+1,j);
    else if(arr[i][j]==4)return solve(i,j-1);
    return 'A';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    while(k--){
        memset(visited,false,sizeof(visited));
        int x,y;
        cin>>x>>y;
        char ans=solve(y-1,x-1);
        if(ans!='A')cout<<ans<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
