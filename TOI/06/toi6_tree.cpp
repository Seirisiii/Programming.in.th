#include<bits/stdc++.h>
using namespace std;
int q=5;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(q--){
        int n;
        cin>>n;
        set<pair<int,int>> t1,t2;
        for(int i=0;i<n-1;++i){
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            t1.insert({a,b});
        }
        for(int i=0;i<n-1;++i){
            int a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            t2.insert({a,b});
        }
        if(t1==t2)cout<<"Y";
        else cout<<"N";
    }
    return 0;
}