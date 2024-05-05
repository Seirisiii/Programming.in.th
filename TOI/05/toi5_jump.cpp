#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[30000];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>x[i];
    }
    for(int i=0;i<n;++i){
        int tmp=x[i]+k;
        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            if(tmp>=x[mid])l=mid+1;
            else r=mid;
        }
        if(l<n and x[l]<=tmp)++l;
        mx=max(mx,l-i-1);
    }
    cout<<mx;
    return 0;
}