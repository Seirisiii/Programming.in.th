#include<bits/stdc++.h>
using namespace std;
int n,p;
map<vector<int>,int> mp;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>p;
    for(int i=0;i<n;++i){
        vector<int> a;
        for(int j=0;j<p;++j){
            int x;
            cin>>x;
        a.push_back(x);
        }
        mp[a]=i+1;
    }
    for(int i=0;i<p;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(mp.find(v)!=mp.end()){
        cout<<mp[v];
        return 0;
    }
    for(auto i:mp){
		vector<int> tmp;
		for(int j=0;j<p;++j){
			tmp.push_back(v[j]-i.first[j]);
		}
		if(mp.find(tmp)!=mp.end() and mp[tmp]!=i.second){
            if(mp[tmp]>i.second)swap(mp[tmp],i.second);
            cout<<mp[tmp]<<" "<<i.second;
			return 0;
		}
	}
    cout<<"NO";
    return 0;
}
