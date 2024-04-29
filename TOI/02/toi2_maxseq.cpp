#include<bits/stdc++.h>
using namespace std;
int n;
int arr[2500];
int mx;
int s,e;
int ss,ee;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>arr[0];
    int sum=arr[0];
    mx=max(0,arr[0]);
    for(int i=1;i<n;++i){
        cin>>arr[i];
        if(arr[i]>arr[i]+sum){
            s=i;
            e=i;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
            e=i;
        }
        if(mx<sum){
            ss=s;
            ee=e;
            mx=sum;
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
