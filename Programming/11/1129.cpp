#include<bits/stdc++.h>
using namespace std;
int n,k;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;++i){
        q.push(i);
    }
    while(!q.empty()){
        int x=k%q.size();
        if(x==0)x=q.size();
        while(--x){
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<"\n";
        q.pop();
    }
    return 0;
}
