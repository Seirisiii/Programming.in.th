#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;
int cnt;
int p=1;
int sum[21];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    while(!v.empty()){
        int x;
        cin>>x;
        cnt+=x;
        cnt%=v.size();
        sum[p]+=v[cnt];
        v.erase(v.begin()+cnt);
        ++p;
        p%=k;
        if(p==0)p=k;
    }
    for(int i=1;i<=k;++i){
        cout<<sum[i]<<"\n";
    }
    return 0;
}
