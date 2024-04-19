#include<bits/stdc++.h>
using namespace std;
int nc,ns;
int id[1005];
queue<int> q[15],qc;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>nc>>ns;
    for(int i=0;i<ns;++i){
        int c,s;
        cin>>c>>s;
        id[s]=c;
    }
    while(true){
        char C;
        cin>>C;
        if(C=='X')break;
        else if(C=='E'){
            int x;
            cin>>x;
            if(q[id[x]].empty()){
                q[id[x]].push(x);
                qc.push(id[x]);
            }
            else q[id[x]].push(x);
        }
        else if(C=='D'){
            if(qc.empty()){
                cout<<"empty\n";
                continue;
            }
            else{
                cout<<q[qc.front()].front()<<"\n";
                q[qc.front()].pop();
                if(q[qc.front()].empty())qc.pop();
            }
        }
    }
    cout<<0;
    return 0;
}