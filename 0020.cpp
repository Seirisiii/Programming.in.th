#include<bits/stdc++.h>
using namespace std;
int arr[10][10];
int sum[10];
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<5;++i){
        for(int j=0;j<4;++j){
            cin >> arr[i][j];
            sum[i]+=arr[i][j];
        }
        mx=max(mx,sum[i]);
    }
    for(int i=0;i<5;++i){
        if(sum[i]==mx) cout << i+1 << " " << sum[i];
    }
    return 0;
}
