#include<bits/stdc++.h>
using namespace std;
int n;
int s[15],b[15];
int mn=INT_MAX;
void solve(int idx,int sour,int sharp){
    if(idx==n){
        if(sharp>0) mn=min(mn,abs(sour-sharp));
    }
    else{
        solve(idx+1,sour*s[idx],sharp+b[idx]);
        solve(idx+1,sour,sharp);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> s[i] >> b[i];
    }
    solve(0,1,0);
    cout << mn;
    return 0;
}
