#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,k;
ll sum;
ll ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>k;
    for(ll i=5;x/i>=1;i*=5){
        sum+=x/i;
    }
    ans+=sum;
    for(ll a=x+1;a<=y;++a){
        ll tmp=a;
        while(tmp%5==0){
            tmp/=5;
            ++sum;
        }
        ans+=sum;
    }
    cout<<ans%k;
    return 0;
}
