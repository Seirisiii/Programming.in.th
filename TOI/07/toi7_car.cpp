#include<bits/stdc++.h>
using namespace std;
int m,n,t;
int arr[101][41];
string s;
void solve(int N,int idx){
    if(idx==t){
        for(auto i:s){
            cout<<i<<"\n";
        }
        return ;
    }
    if(N-1>=1){
        if(arr[idx+1][N-1]==0){
            s+="1";
            solve(N-1,idx+1);
            s.pop_back();
        }
    }
    if(N+1<=m){
        if(arr[idx+1][N+1]==0){
            s+="2";
            solve(N+1,idx+1);
            s.pop_back();
        }
    }
    if(arr[idx+1][N]==0){
        s+="3";
        solve(N,idx+1);
        s.pop_back();
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n>>t;
    for(int i=1;i<=t;++i){
        for(int j=1;j<=m;++j){
            cin>>arr[i][j];
        }
    }
    solve(n,0);
    return 0;
}