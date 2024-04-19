#include<bits/stdc++.h>
using namespace std;
int r,c;
char arr[50][50];
queue<pair<int,pair<int,int>>> q;
int ii,jj;
bool visited[50][50];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='*')q.push({-1,{i,j}});
            else if(arr[i][j]=='S')ii=i,jj=j,arr[i][j]='.';
            else if(arr[i][j]=='X')visited[i][j]=true;
        }
    }
    q.push({0,{ii,jj}});
    while(!q.empty()){
        int cnt=q.front().first;
        int i=q.front().second.first;
        int j=q.front().second.second;
        q.pop();
        if(arr[i][j]=='D' and cnt!=-1){
            cout<<cnt;
            return 0;
        }
        if(visited[i][j])continue;
        visited[i][j]=true;
        if(cnt==-1){
            if(i-1>=0 and !visited[i-1][j] and arr[i-1][j]=='.')arr[i-1][j]='*',q.push({-1,{i-1,j}});
            if(j-1>=0 and !visited[i][j-1] and arr[i][j-1]=='.')arr[i][j-1]='*',q.push({-1,{i,j-1}});
            if(i+1<r and !visited[i+1][j] and arr[i+1][j]=='.')arr[i+1][j]='*',q.push({-1,{i+1,j}});
            if(j+1<c and !visited[i][j+1] and arr[i][j+1]=='.')arr[i][j+1]='*',q.push({-1,{i,j+1}});
        }
        else{
            if(i-1>=0 and !visited[i-1][j] and arr[i-1][j]!='*')q.push({cnt+1,{i-1,j}});
            if(j-1>=0 and !visited[i][j-1] and arr[i][j-1]!='*')q.push({cnt+1,{i,j-1}});
            if(i+1<r and !visited[i+1][j] and arr[i+1][j]!='*')q.push({cnt+1,{i+1,j}});
            if(j+1<c and !visited[i][j+1] and arr[i][j+1]!='*')q.push({cnt+1,{i,j+1}});
        }
    }
    cout<<"KAKTUS";
    return 0;
}