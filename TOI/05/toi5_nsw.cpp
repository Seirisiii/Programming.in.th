#include<bits/stdc++.h>
using namespace std;
string s1,s2;
vector<int> k[3];
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2;
    for(int i=0;i<s1.size();++i){
        for(int j=s1[i]-'0';j<=9;++j){
            k[i].push_back(j);
        }
        for(int j=1;j<s1[i]-'0';++j){
             k[i].push_back(j);
        }
    }
    for(auto i:s2){
        int idx=i-'0'-1;
        idx=k[0][idx]-1;
        idx=k[1][idx]-1;
        cout<<k[2][idx];
        int x=k[0][0];
        while(x--){
            k[0].push_back(k[0][0]);
            k[0].erase(k[0].begin());
        }
        vector<int> tmp;
        tmp.push_back(k[1][8]);
        for(int j=0;j<8;++j){
            tmp.push_back(k[1][j]);
        }
        k[1]=tmp;
        x=k[2][0];
        while(x--){
            k[2].push_back(k[2][0]);
            k[2].erase(k[2].begin());
        }
    }
    return 0;
}