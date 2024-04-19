#include<bits/stdc++.h>
using namespace std;
int a,b;
char arr[100][100];
bool visited[100][100];
queue<pair<int,pair<int,int>>> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
            cin>>arr[i][j];
        }
    }
    q.push({1,{0,0}});
    while(!q.empty()){
        int cnt=q.front().first;
        int i=q.front().second.first;
        int j=q.front().second.second;
        q.pop();
        if(i<0 or i>=a or j<0 or j>=b)continue;
        if(visited[i][j]){
            cout<<cnt<<"\n"<<i+1<<" "<<j+1;
            return 0;
        }
        visited[i][j]=true;
        if(!visited[i][j+1] and (arr[i][j]=='R' or arr[i][j]=='B'))q.push({cnt+1,{i,j+1}});
        if(!visited[i+1][j] and (arr[i][j]=='D' or arr[i][j]=='B'))q.push({cnt+1,{i+1,j}});
        if(!visited[i][j-1] and (arr[i][j-1]=='R' or arr[i][j-1]=='B'))q.push({cnt+1,{i,j-1}});
        if(!visited[i-1][j] and (arr[i-1][j]=='D' or arr[i-1][j]=='B'))q.push({cnt+1,{i-1,j}});
    }
    return 0;
}
