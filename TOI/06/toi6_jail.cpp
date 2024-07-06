#include<bits/stdc++.h>
using namespace std;
int n,m;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        q.emplace(i);
    }
    int cnt=1;
    while(!q.empty()){
        if(cnt==m){
            cout<<q.front()<<" ";
            q.pop();
            cnt=1;
        }
        q.emplace(q.front());
        q.pop();
        ++cnt;
    }
    return 0;
}