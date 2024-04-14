#include<bits/stdc++.h>
using namespace std;
int n,m;
int row[10005],col;
int ans[100005],mx[100005],ll[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    while(n--){
        int a,l,s;
        cin>>a>>l>>s;
        ++row[l];
		col=max(col,row[l]);
		if(mx[row[l]]<s){
			ans[row[l]]=a;
			ll[row[l]]=l;
			mx[row[l]]=s;
		}
		else if(mx[row[l]]==s and ll[row[l]]>l){
			ans[row[l]]=a;
			ll[row[l]]=l;
		}
	}
	for(int i=1;i<=col;++i){
		cout<<ans[i]<<"\n";
	}
    return 0;
}
