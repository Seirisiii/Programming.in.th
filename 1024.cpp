#include<bits/stdc++.h>
using namespace std;
int n,sum;
int arr[1005];
int p1,p2,p3;
int mn=INT_MAX;
int o2,o3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=1;i<=n-2;++i){
        p1+=arr[i];
        for(int j=i+1;j<=n-1;++j){
            p2+=arr[j];
            p3=sum-p1-p2;
            int diff=abs(max(p1,max(p2,p3))-min(p1,min(p2,p3)));
            if(diff<mn){
                mn=diff;
                o2=i+1;
                o3=j+1;
            }
        }
        p2=0;
        p3=0;
    }
    cout<<o2<<" "<<o3;
    return 0;
}
