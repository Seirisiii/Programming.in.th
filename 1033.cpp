#include<bits/stdc++.h>
using namespace std;
int n,k;
char d[5][1001];
int table[101][101];
int x[5],y[5];
int p[5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=4;++i){
        p[i]=1;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            table[i][j]=-1;
        }
    }
    for(int i=1;i<=4;++i){
        for(int j=1;j<=k;++j){
            cin>>d[i][j];
        }
    }
    x[1]=n,y[1]=1;
    table[1][n]='1';
    x[2]=n,y[2]=n;
    table[n][n]='2';
    x[3]=1,y[3]=n;
    table[n][1]='3';
    x[4]=1,y[4]=1;
    table[1][1]='4';
    for(int i=1;i<=k;++i){
        for(int j=1;j<=4;++j){
            if(d[j][i]=='N'){
                if(table[y[j]-1][x[j]]==0 or table[y[j]-1][x[j]]>='1')continue;
                else if(table[y[j]-1][x[j]]==-1){
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    --y[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]-1][x[j]]==j){
                    table[y[j]][x[j]]=j;
                    --y[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]-1][x[j]]<=4){
                    --p[table[y[j]-1][x[j]]];
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    --y[j];
                    table[y[j]][x[j]]=j+'0';
                }
            }
            else if(d[j][i]=='E'){
                if(table[y[j]][x[j]+1]==0 or table[y[j]][x[j]+1]>='1')continue;
                else if(table[y[j]][x[j]+1]==-1){
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    ++x[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]][x[j]+1]==j){
                    table[y[j]][x[j]]=j;
                    ++x[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]][x[j]+1]<=4){
                    --p[table[y[j]][x[j]+1]];
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    ++x[j];
                    table[y[j]][x[j]]=j+'0';
                }
            }
            else if(d[j][i]=='S'){
                if(table[y[j]+1][x[j]]==0 or table[y[j]+1][x[j]]>='1')continue;
                else if(table[y[j]+1][x[j]]==-1){
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    ++y[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]+1][x[j]]==j){
                    table[y[j]][x[j]]=j;
                    ++y[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]+1][x[j]]<=4){
                    --p[table[y[j]+1][x[j]]];
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    ++y[j];
                    table[y[j]][x[j]]=j+'0';
                }
            }
            else if(d[j][i]=='W'){
                if(table[y[j]][x[j]-1]==0 or table[y[j]][x[j]-1]>='1')continue;
                else if(table[y[j]][x[j]-1]==-1){
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    --x[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]][x[j]-1]==j){
                    table[y[j]][x[j]]=j;
                    --x[j];
                    table[y[j]][x[j]]=j+'0';
                }
                else if(table[y[j]][x[j]-1]<=4){
                    --p[table[y[j]][x[j]-1]];
                    ++p[j];
                    table[y[j]][x[j]]=j;
                    --x[j];
                    table[y[j]][x[j]]=j+'0';
                }
            }
        }
    }
    //for(int i=1;i<=n;++i){
    //    for(int j=1;j<=n;++j){
    //        cout<<table[i][j]<<" ";
    //    }
    //    cout<<"\n";
    //}
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(table[i][j]==-1){
                cout<<"No";
                return 0;
            }
        }
    }
    int mx=0,cnt=0;
    for(int i=1;i<=4;++i){
        //cout<<p[i]<<" ";
        mx=max(p[i],mx);
    }
    //cout<<"\n";
    for(int i=1;i<=4;++i){
        if(p[i]==mx)++cnt;
    }
    cout<<cnt<<" "<<mx<<"\n";
    for(int i=1;i<=4;++i){
        if(p[i]==mx)cout<<i<<"\n";
    }
    return 0;
}
