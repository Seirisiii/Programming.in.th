#include<bits/stdc++.h>
using namespace std;
int n;
int arr[2500],dp[2500];
int mx;
int s,e;
int ss,ee;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>arr[0];
    dp[0]=arr[0];
    mx=max(0,arr[0]);
    for(int i=1;i<n;++i){
        cin>>arr[i];
        if(arr[i]>arr[i]+dp[i-1]){
            s=i;
            e=i;
            dp[i]=arr[i];
        }
        else{
            dp[i]=arr[i]+dp[i-1];
            e=i;
        }
        if(mx<dp[i]){
            ss=s;
            ee=e;
            mx=dp[i];
        }
    }
    if(mx==0){
        cout<<"Empty sequence";
        return 0;
    }
    for(int i=ss;i<=ee;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<mx;
    return 0;
}
