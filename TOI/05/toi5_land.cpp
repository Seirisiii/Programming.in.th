#include<bits/stdc++.h>
using namespace std;
int m,n;
double c[3][3];
bool visited[3][3];
double mn=DBL_MAX;
int di[8]={0,1,1,1,0,-1,-1,-1};
int dj[8]={-1,-1,0,1,1,1,0,-1};
void recur(int N,double sum){
    //rak P'Kaooo
    if(N==0){
        mn=min(mn,sum);
        return ;
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(visited[i][j])continue;
            visited[i][j]=true;
            sum+=c[i][j];
            for(int k=0;k<8;++k){
                int ii=i+di[k];
                int jj=j+dj[k];
                if(ii>=0 and ii<m and jj>=0 and jj<n and !visited[ii][jj])c[ii][jj]+=c[i][j]*0.1;
            }
            recur(N-1,sum);
            visited[i][j]=false;
            sum-=c[i][j];
            for(int k=0;k<8;++k){
                int ii=i+di[k];
                int jj=j+dj[k];
                if(ii>=0 and ii<m and jj>=0 and jj<n and !visited[ii][jj])c[ii][jj]-=c[i][j]*0.1;
            }
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>c[i][j];
        }
    }
    recur(m*n,0);
    printf("%.2lf",mn);
    return 0;
}