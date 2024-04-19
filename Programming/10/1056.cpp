#include<bits/stdc++.h>
using namespace std;
int n,k;
int t[2000];
int x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>t[i];
    }
    sort(t,t+n,greater<int>());
    for(int i=0;i<n;i+=k){
        x+=t[i];
    }
    cout<<x;
    return 0;
}
