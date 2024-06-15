#include<bits/stdc++.h>
using namespace std;
int n;
int x[2000];
int y[2000];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x[i];
    }
    for(int i=0;i<n;++i){
        cin>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for(int i=0;i<n;++i){
        res+=abs(x[i]-y[i]);
    }
    cout<<res;
    return 0;
}