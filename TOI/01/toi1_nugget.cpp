#include<bits/stdc++.h>
using namespace std;
int n;
bool check;
bool solve(int x){
    if(x==0)return true;
    if(x>0)return solve(x-6) or solve(x-9) or solve(x-20);
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        if(solve(i)){
            cout<<i<<"\n";
            check=true;
        }
    }
    if(!check)cout<<"no";
    return 0;
}
