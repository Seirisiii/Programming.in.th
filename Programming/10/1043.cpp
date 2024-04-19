#include<bits/stdc++.h>
using namespace std;
int n;
int solve(int x){
    for(int i=2;i<=sqrt(x);++i){
        int ans=0,tmp=x;
        while(tmp%i==0){
            tmp/=i;
            ++ans;
        }
        if(tmp==1)return ans;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(solve(x)!=0)cout<<solve(x);
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
