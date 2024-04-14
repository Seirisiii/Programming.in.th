#include<bits/stdc++.h>
using namespace std;
int n;
int w[600][600];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<2*n;++i){
        for(int j=0;j<2*n;++j){
            cin>>w[i][j];
            if(w[i][j]==0 and i!=j)w[i][j]=INT_MAX;
        }
    }
    for(int k=0;k<2*n;++k){
        for(int i=0;i<2*n;++i){
            for(int j=0;j<2*n;++j){
                if(w[i][k]!=INT_MAX and w[k][j]!=INT_MAX)w[i][j]=min(w[i][j],w[i][k]+w[k][j]);
            }
        }
    }
    cout<<w[2*n-1][1];
    return 0;
}
