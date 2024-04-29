#include<bits/stdc++.h>
using namespace std;
int w,h,n;
int arr[3000];
int res1,res2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>h>>n;
    while(n--){
        int x,a;
        cin>>x>>a;
        for(int i=x;i<x+a and i<w;++i){
            ++arr[i];
        }
    }
    for(int i=0;i<w;++i){
        if(arr[i]==0)++res1;
        else if(arr[i]==1)++res2;
    }
    cout<<res1*h<<" "<<res2*h;
    return 0;
}