#include <bits/stdc++.h>
using namespace std;
int m,n;
int o;
bool check[51][51];
long long dp[51][51];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cin>>o;
    while(o--){
        int a,b;
        cin>>a>>b;
        check[b][a]=true;
    }
    dp[1][0]=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            if(check[i][j])continue;
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[n][m];
    return 0;
}
