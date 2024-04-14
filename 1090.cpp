#include<bits/stdc++.h>
using namespace std;
int n;
long long tail[1000000];
long long a,ans;
unordered_map<long long,long long> tails;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>tail[i];
    }
    cin>>a;
    for(int i=0;i<n;++i){
        ans+=tails[a-tail[i]];
        ++tails[tail[i]];
    }
    cout<<ans;
    return 0;
}
