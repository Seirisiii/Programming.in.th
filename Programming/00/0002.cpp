#include<bits/stdc++.h>
using namespace std;
int n;
int mn=INT_MAX;
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    cout << mn << endl << mx;
    return 0;
}

