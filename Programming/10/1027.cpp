#include<bits/stdc++.h>
using namespace std;
string s;
pair<int,char> p[7]={{0,'A'},{0,'B'},{0,'C'},{0,'D'},{0,'E'},{0,'F'},{0,'G'}};
int cntout;
bool compare(pair<int,char> &a,pair<int,char> &b){
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        int out=0,idx,mn=INT_MAX;
        cin>>s;
        if(s=="!")break;
        for(int i=0;i<s.size();++i){
            if(p[s[i]-'A'].first!=-1) ++p[s[i]-'A'].first;
        }
        for(int i=0;i<7;++i){
            if(mn>p[i].first and p[i].first!=-1){
                mn=p[i].first;
                out=0;
            }
            if(mn==p[i].first and p[i].first!=-1){
                idx=i;
                ++out;
            }
        }
        if(out==1){
            ++cntout;
            if(cntout<=6)p[idx].first=-1;
            else cntout=6;
        }
    }
    sort(p,p+7,compare);
    cout<<7-cntout<<"\n";
    for(int i=0;i<7;++i){
        if(p[i].first!=-1)cout<<p[i].second<<" "<<p[i].first<<"\n";
    }
    return 0;
}
