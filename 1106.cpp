#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    vector<int> v(n);
    for(int i=1;i<=n;++i){
        v[i-1]=i;
    }
    int idx=0;
    while(v.size()>1){
        int tmp=k;
        k=v[(idx+k-1)%v.size()];
        idx=(idx+tmp-1)%(v.size());
        v.erase(v.begin()+idx);
    }
    cout<<v[0];
    return 0;
}

