#include<bits/stdc++.h>
using namespace std;
int n,k,a;
int arr[10001];
int e=1;
int idx,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>a;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        while(x--){
            arr[e]=i;
            ++e;
        }
    }
    for(int i=1;i<e;++i){
        bool visited[101]={};
        int sum=0;
        for(int j=i;j<=min(e-1,i+(k-1)*a);j+=a){
            if(visited[arr[j]])continue;
            ++sum;
            visited[arr[j]]=true;
        }
        if(sum>mx){
            idx=i;
            mx=sum;
        }
    }
    cout<<idx<<" "<<mx;
    return 0;
}