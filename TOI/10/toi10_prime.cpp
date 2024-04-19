#include<bits/stdc++.h>
using namespace std;
int n,cnt,x=2;
bool num[10000000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(true){
        if(num[x]==0){
            ++cnt;
            if(cnt==n){
                cout<<x;
                return 0;
            }
        }
        for(int i=2;i*x<10000000;++i){
            num[x*i]=1;
        }
        ++x;
    }
    return 0;
}
