#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int> p[1000000];
vector<pair<int,int>> v;
int mx;
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first>b.first;
    return a.second<b.second;
}
bool compare2(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first<b.first;
    return a.second>b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n,compare);
    for(int i=0;i<n;++i){
        if(mx<=p[i].second){
            mx=p[i].second;
            v.push_back(p[i]);
        }
    }
    sort(v.begin(),v.end(),compare2);
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}