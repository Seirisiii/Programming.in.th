#include<bits/stdc++.h>
using namespace std;
int n;
int mx;
vector<int> v(256,0);
vector<int> v1,v2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int l,h,r;
        cin>>l>>h>>r;
        mx=max(mx,r);
        for(int i=l;i<r;++i){
            v[i]=max(v[i],h);
        }
    }
    int height=0;
    for(int i=0;i<=mx;++i){
        if(v[i]!=height){
            v1.push_back(i);
            v2.push_back(v[i]);
            height=v[i];
        }
    }
    for(int i=0;i<v1.size() and i<v2.size();++i){
        cout<<v1[i]<<" "<<v2[i]<<" ";
    }
    return 0;
}
