#include<bits/stdc++.h>
using namespace std;
int n;
int a[30000];
int ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;--i){
        for(int j=0;j<i-1;++j){
            if(a[j]+a[j+1]>a[i]){
                ans=max(ans,i-j);
                break;
            }
        }
    }
    cout<<ans+1;
    return 0;
}

