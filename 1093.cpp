#include<bits/stdc++.h>
using namespace std;
int n;
int arr[2005];
int dp[2005][2005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            dp[i][j]=max(dp[i-1][j-1]+arr[i],dp[i-1][j+2]-arr[i]);
        }
        dp[i][0]=max(dp[i-1][0],dp[i-1][2]-arr[i]);
    }
    cout<<dp[n][0];
    return 0;
}