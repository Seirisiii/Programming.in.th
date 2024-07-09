#include<bits/stdc++.h>
using namespace std;
int k,a,b;
void solve(string s,int aa,int bb){
    if(aa==k or bb==k or s.size()==2*k-1){
        cout<<s<<"\n";
        return ;
    }
    solve(s+"W ",aa+1,bb);
    solve(s+"L ",aa,bb+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>a>>b;
    solve("",a,b);
    return 0;
}