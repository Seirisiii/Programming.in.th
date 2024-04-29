#include<bits/stdc++.h>
using namespace std;
int n;
int mx;
int arr[256];
vector<pair<int,int>> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int l,h,r;
        cin>>l>>h>>r;
        mx=max(mx,r);
        for(int i=l;i<r;++i){
            arr[i]=max(arr[i],h);
        }
    }
    int height=0;
    for(int i=0;i<=mx;++i){
        if(arr[i]!=height){
            v.push_back({i,arr[i]});
            height=arr[i];
        }
    }
    for(auto [i,j]:v){
        cout<<i<<" "<<j<<" ";
    }
    return 0;
}
