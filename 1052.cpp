#include<bits/stdc++.h>
using namespace std;
int n;
int x[100005],h[100005];
int mx=-1;
int jj;
char d;
int l[100005],r[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x[i]>>h[i];
    }
    for(int i=1;i<=n;++i){
        l[i]=1;
        for(int j=i-1;j>0 and x[i]-h[i]<x[j];--j){
            l[i]=max(l[i],l[j]-j+i);
        }
        if(mx<l[i]){
            mx=l[i];
            jj=i;
            d='L';
        }
        //cout<<jj<<" "<<d<<"\n";
    }
    //for(int i=1;i<=n;++i){
    //    cout<<l[i]<<" ";
    //}
    for(int i=n;i>0;--i){
        r[i]=1;
        for(int j=i+1;j<=n and x[i]+h[i]>x[j];++j){
            r[i]=max(r[i],r[j]+j-i);
        }
        if(mx<r[i]){
            mx=r[i];
            jj=i;
            d='R';
        }
        else if(mx==r[i] and i<jj){
            jj=i;
            d='R';
        }
        //cout<<jj<<" "<<d<<"\n";
    }
    //for(int i=1;i<=n;++i){
    //    cout<<r[i]<<" ";
    //}
    cout<<jj<<" "<<d;
    return 0;
}
