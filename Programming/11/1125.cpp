#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll x[500000],y[500000];
ll res;
ll sx,sy;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for(int i=0;i<n;++i){
        res+=x[i]*i-sx+y[i]*i-sy;
        sx+=x[i];
        sy+=y[i];
    }
    cout<<res;
    return 0;
}