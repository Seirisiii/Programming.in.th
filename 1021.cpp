#include<bits/stdc++.h>
using namespace std;
int n;
priority_queue<int> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        if(c=='Q'){
            if(pq.empty())cout<<-1<<"\n";
            else{
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else if(c=='P'){
            int i;
            cin>>i;
            pq.push(i);
        }
    }
    return 0;
}
