#include<bits/stdc++.h>
using namespace std;
int w,l;
char arr[64][64];
int dp[64][64];
int arr2[64][64];
int cnt;
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int mxsquare;
int mnfill=2e9;
bool issafe(int i,int j){
    if(i<0 or i>=l or j<0 or j>=w)return false;
    else if(arr2[i][j]!=0 or arr[i][j]!='P')return false;
    return true;
}
void recur(int i,int j){
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(issafe(ni,nj)){
            arr2[ni][nj]=cnt;
            recur(ni,nj);
        }
    }
    return ;
}
void solve(int i,int j){
    int cnt2=0;
    bool visited[2049]={};
    visited[0]=true;
    for(int ii=i-mxsquare+1;ii<=i;++ii){
        for(int jj=j-mxsquare+1;jj<=j;++jj){
            if(visited[arr2[ii][jj]])continue;
            visited[arr2[ii][jj]]=true;
            ++cnt2;
        }
    }
    mnfill=min(mnfill,cnt2);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>l;
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            if(arr[i][j]=='T'){
                dp[i][j]=0;
                continue;
            }
            else if(arr[i][j]=='P' and arr2[i][j]==0){
                ++cnt;
                arr2[i][j]=cnt;
                recur(i,j);
            }
            if(i>0 and j>0)dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            else dp[i][j]=1;
            mxsquare=max(mxsquare,dp[i][j]);
        }
    }
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            if(dp[i][j]==mxsquare)solve(i,j);
        }
    }
    cout<<mxsquare*mxsquare<<" "<<mnfill;
    return 0;
}