#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> x;
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int tmp;
        cin>>tmp;
        x.push_back(tmp);
    }
    while(x.size()>1){
        int idx=0;
        int mx=INT_MIN;
        for(int i=0;i<x.size()-1;++i){
            int tmp=abs(x[i]-x[i+1]);
            if(tmp>mx){
                idx=i;
                mx=tmp;
            }
        }
        sum+=mx;
        x.erase(x.begin()+idx);
        x.erase(x.begin()+idx);
    }
    cout<<sum;
    return 0;
}
