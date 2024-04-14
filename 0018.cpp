#include<bits/stdc++.h>
using namespace std;
int n,k;
bool check[1005];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i=2;i<=n;++i){
        for(int j=i;j<=n;j+=i){
            if(check[j]) continue;
            check[j]=true;
            ++cnt;
            if(cnt==k){
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}

