#include<bits/stdc++.h>
using namespace std;
int n;
int ans;
int num;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mn=4005;
    cin>>n;
    while(n--){
		cin>>num;
		if(abs(2017-num)<mn){
			mn=abs(2017-num);
			ans=num;
		}
	}
    cout<<ans;
    return 0;
}