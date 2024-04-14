#include<bits/stdc++.h>
using namespace std;
int n;
int arr[10005];
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        ++arr[x];
    }
    for(int i=1;i<=10000;++i){
        mx=max(mx,arr[i]);
    }
    for(int i=1;i<=10000;++i){
        if(arr[i]==mx){
            cout << i << " ";
        }
    }
    return 0;
}
