#include<bits/stdc++.h>
using namespace std;
int n,m;
int X[1000],Y[1000],x[1000],y[1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>X[i]>>Y[i]>>x[i]>>y[i];
    }
    while(m--){
        int cnt=0;
        int P,Q,p,q;
        cin>>P>>Q>>p>>q;
        for(int j=0;j<n;++j){
            if(X[j]>=p or Y[j]<=q or x[j]<=P or y[j]>=Q)continue;
            ++cnt;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
