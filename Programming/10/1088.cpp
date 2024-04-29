#include<bits/stdc++.h>
using namespace std;
int n,m;
char c;
map<int,int> mp;
int res;
int ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    mp[n+1]=0;
    while(m--){
        int a,b;
        cin>>a>>b;
        ++mp[a];
        --mp[b+1];
    }
    cin>>c;
    if(c=='R')res=3;
    else if(c=='G')res=4;
    else if(c=='B')res=5;
    int previdx=1;
    int curr=0;
    for(auto i:mp){
        i.second%=3;
        if(i.second<0)i.second+=3;
        ans+=((res-curr)%3)*(i.first-previdx);
        previdx=i.first;
        curr=(curr+i.second)%3;
    }
    cout<<ans;
    return 0;
}