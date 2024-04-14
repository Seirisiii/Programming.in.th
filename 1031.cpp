#include<bits/stdc++.h>
using namespace std;
int k,n,m;
int dp[10000];
vector<int> v[10000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>n>>m;
    for(int i=1;i<n;++i){
        dp[i]=2e9;
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);
    }
    for(int i=0;i<n;++i){
        for(auto j:v[i]){
            dp[j]=min(dp[j],dp[i]+1);
        }
    }
    for(int i=n-1;i>=0;--i){
        if(dp[i]<=k){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}
