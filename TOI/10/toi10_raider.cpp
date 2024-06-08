#include<bits/stdc++.h>
using namespace std;
const int M=97;
const int N=100;
int m,n;
int arr[M][N];
int dist[M][N];
int ii[6]={-1,-1,0,1,1,0};
int jj[2][6]={{0,1,1,1,0,-1},{0,-1,-1,-1,0,1}};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    queue<tuple<int,int,int>> q;
    int mid=(m-1)/2;
    q.emplace(0,mid,-1);
    while(!q.empty()){
        int d,i,j;
        tie(d,i,j)=q.front();
        q.pop();
        if(i==mid and j==n-1){
            cout<<d;
            return 0;
        }
        ++d;
        for(int k=0;k<6;++k){
            int ni=i+ii[k];
            int nj=j+jj[i%2][k];
            if(ni>=0 and ni<m and nj>=0 and nj<n and arr[ni][nj]!=0 and dist[ni][nj]!=d and d%arr[ni][nj]==0){
                dist[ni][nj]=d;
                q.emplace(d,ni,nj);
            }
        }
    }
    return 0;
}