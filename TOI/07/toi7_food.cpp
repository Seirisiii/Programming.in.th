#include<bits/stdc++.h>
using namespace std;
int n,m;
bool food[9];
bool choose[9];
vector<int> permutation;
void search(int k){
    if(permutation.size()==n){
        for(auto i:permutation){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else{
        for(int i=1;i<=n;++i){
            if(k==0 and food[i])continue;
            if(choose[i])continue;
            choose[i]=true;
            permutation.emplace_back(i);
            search(k+1);
            choose[i]=false;
            permutation.pop_back();
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        food[x]=true;
    }
    search(0);
    return 0;
}