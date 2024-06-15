#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int qs[1001][1001];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>k;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>qs[i][j];
            qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }
    for(int i=k;i<=n;++i){
        for(int j=k;j<=m;++j){
            int val=qs[i][j]-qs[i-k][j]-qs[i][j-k]+qs[i-k][j-k];
            mx=max(val,mx);
        }
    }
    cout<<mx;
    return 0;
}