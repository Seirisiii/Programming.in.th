#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr1[105][105];
int arr2[105][105];
int sumi1[105],sumj1[105];
int sumi2[105],sumj2[105];
int sum,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr1[i][j];
            sumi1[i]+=arr1[i][j];
            sumj1[j]+=arr1[i][j];
            sum+=arr1[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr2[i][j];
            sumi2[i]+=arr2[i][j];
            sumj2[j]+=arr2[i][j];
        }
    }
    for(int i=0;i<n;++i){
        mx=max(mx,sum-sumi1[i]+sumi2[i-1]+sumi2[i+1]);
    }
    for(int j=0;j<m;++j){
        mx=max(mx,sum-sumj1[j]+sumj2[j-1]+sumj2[j+1]);
    }
    cout<<mx;
    return 0;
}
