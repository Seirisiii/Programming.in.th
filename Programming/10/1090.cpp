#include<bits/stdc++.h>
using namespace std;
long long n,a;
long long arr[1000005];
long long ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        ++arr[x];
    }
    cin>>a;
    for(int i=0;i<=a/2 and i<=100000;++i){
        if(i==a-i)ans+=(arr[i]*(arr[i]-1)/2);
        else ans+=arr[i]*arr[a-i];
    }
    cout<<ans;
    return 0;
}
