#include<bits/stdc++.h>
using namespace std;
string str[14];
int n;
void solve(int x,int idx){
    if(x<0)return ;
    else if(x==0){
        for(int i=0;i<idx;++i){
            cout<<str[i]<<"\n";
        }
        cout<<'E'<<"\n";
        return ;
    }
    str[idx]="--";
    solve(x-1,idx+1);
    str[idx]="||";
    solve(x-2,idx+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    solve(n,0);
    return 0;
}
