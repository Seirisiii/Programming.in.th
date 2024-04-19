#include<bits/stdc++.h>
using namespace std;
int n;
int mx;
char c[50000][70];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(c,'o',sizeof(c));
    cin>>n;
    for(int i=0;i<n;++i){
        int p,q,r;
        cin>>p>>q>>r;
        mx=max(mx,p);
        for(int j=q-1;j<q+r-1 and j<70;++j){
            c[p-1][j]='x';
        }
    }
    for(int i=0;i<mx;++i){
        for(int j=0;j<70;++j){
            cout<<c[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
