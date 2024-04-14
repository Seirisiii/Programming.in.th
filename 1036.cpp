#include<bits/stdc++.h>
using namespace std;
int n,k;
int dp[1<<8];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<1<<k;++i){
        dp[i]=INT_MAX;
    }
    for(int i=0;i<n;++i){
        int w;
        cin>>w;
        int sum=0;
        for(int j=0;j<k;++j){
            int p;
            cin>>p;
            sum+=p<<j;
        }
        dp[sum]=min(dp[sum],w);
    }
    for(int i=0;i<1<<k;++i){
        for(int j=0;j<1<<k;++j){
            if(dp[i]==INT_MAX or dp[j]==INT_MAX)continue;
            dp[i|j]=min(dp[i|j],dp[i]+dp[j]);
        }
    }
    cout<<dp[(1<<k)-1];
    return 0;
}
