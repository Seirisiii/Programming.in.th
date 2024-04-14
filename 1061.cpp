#include<bits/stdc++.h>
using namespace std;
int m;
int x,y;
int table[21][21];
int mx;
void solve(int i,int j,int x){
    if(i<1 or i>m or j<1 or j>m or table[i][j]==100 or table[i][j]<=x)return ;
    mx=max(mx,table[i][j]);
    x=table[i][j];
    solve(i-1,j,x);
    solve(i,j-1,x);
    solve(i+1,j,x);
    solve(i,j+1,x);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>x>>y;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=m;++j){
            cin>>table[i][j];
        }
    }
    solve(y,x,-6);
    cout<<mx;
    return 0;
}
