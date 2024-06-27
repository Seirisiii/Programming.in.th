#include<bits/stdc++.h>
using namespace std;
int n,k;
int d[100001];
set<pair<int,int>> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>d[i];
    }
    sort(d,d+n);
    for(int i=0;i<min(n,k);++i){
        s.insert({i+d[i],i});
    }
    int res=n;
    for(auto [day,idx]:s){
        if(res<day or k==0)break;
        ++res;
        --k; //wash
        s.insert({day+1+d[idx],idx}); //wear and send 
    }
    cout<<res;
    return 0;
}