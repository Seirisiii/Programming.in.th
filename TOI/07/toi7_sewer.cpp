#include<bits/stdc++.h>
using namespace std;
int a,b;
char table[100][100];
bool visited[100][100];
queue<pair<int,pair<int,int>>> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
            cin>>table[i][j];
        }
    }
    q.push({1,{0,0}});
    while(!q.empty()){
        int cnt=q.front().first;
        int i=q.front().second.first;
        int j=q.front().second.second;
        q.pop();
        if(visited[i][j]){
            cout<<cnt<<"\n"<<i+1<<" "<<j+1;
            return 0;
        }
        visited[i][j]=true;
        if(j+1<b)if(!visited[i][j+1])if(table[i][j]=='B' or table[i][j]=='R')q.push({cnt+1,{i,j+1}});
        if(i+1<a)if(!visited[i+1][j])if(table[i][j]=='B' or table[i][j]=='D')q.push({cnt+1,{i+1,j}});
        if(j-1>=0)if(!visited[i][j-1])if(table[i][j-1]=='B' or table[i][j-1]=='R')q.push({cnt+1,{i,j-1}});
        if(i-1>=0)if(!visited[i-1][j])if(table[i-1][j]=='B' or table[i-1][j]=='D')q.push({cnt+1,{i-1,j}});
    }
    return 0;
}