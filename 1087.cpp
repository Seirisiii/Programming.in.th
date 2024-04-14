#include<bits/stdc++.h>
using namespace std;
int r,c,k;
int v[300][300];
int mx;
int solve(int y,int x){
    int sum=v[y][x];
    for(int i=1;i<=k and y-i>=0;i+=2){
        sum-=v[y-i][x];
    }
    for(int i=1;i<=k and y+i<r;i+=2){
        sum-=v[y+i][x];
    }
    for(int i=1;i<=k and x-i>=0;i+=2){
        sum-=v[y][x-i];
    }
    for(int i=1;i<=k and x+i<c;i+=2){
        sum-=v[y][x+i];
    }
    for(int i=2;i<=k and y-i>=0;i+=2){
        sum+=v[y-i][x];
    }
    for(int i=2;i<=k and y+i<r;i+=2){
        sum+=v[y+i][x];
    }
    for(int i=2;i<=k and x-i>=0;i+=2){
        sum+=v[y][x-i];
    }
    for(int i=2;i<=k and x+i<c;i+=2){
        sum+=v[y][x+i];
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c>>k;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            int sum=solve(i,j);
            mx=max(sum,mx);
        }
    }
    cout<<mx;
    return 0;
}
