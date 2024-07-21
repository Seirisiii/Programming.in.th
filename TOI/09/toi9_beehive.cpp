#include<bits/stdc++.h>
using namespace std;
int m,n;
pair<int,int> dp[1000][1000];
int mx;
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<n;++i){
        cin>>dp[0][i].first;
        dp[0][i].second=1;
    }
    for(int i=1;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>dp[i][j].first;
        }
    }
    for(int i=1;i<m;++i){
        for(int j=0;j<n;++j){
            if(i%2){
                if(j==n-1){
                    dp[i][j].first+=dp[i-1][j].first;
                    dp[i][j].second=dp[i-1][j].second;
                }
                else{
                    if(dp[i-1][j].first>dp[i-1][j+1].first){
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second;
                    }
                    else if(dp[i-1][j].first<dp[i-1][j+1].first){
                        dp[i][j].first+=dp[i-1][j+1].first;
                        dp[i][j].second=dp[i-1][j+1].second;
                    }
                    else{
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second+dp[i-1][j+1].second;
                    }
                }
            }
            else{
                if(j==0){
                    dp[i][j].first+=dp[i-1][j].first;
                    dp[i][j].second=dp[i-1][j].second;
                }
                else{
                    if(dp[i-1][j].first>dp[i-1][j-1].first){
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second;
                    }
                    else if(dp[i-1][j].first<dp[i-1][j-1].first){
                        dp[i][j].first+=dp[i-1][j-1].first;
                        dp[i][j].second=dp[i-1][j-1].second;
                    }
                    else{
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second+dp[i-1][j-1].second;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;++i){
        if(mx<dp[m-1][i].first){
            mx=dp[m-1][i].first;
            cnt=dp[m-1][i].second;
        }
        else if(mx==dp[m-1][i].first){
            cnt+=dp[m-1][i].second;
        }
    }
    cout<<mx<<" "<<cnt;
    return 0;
}