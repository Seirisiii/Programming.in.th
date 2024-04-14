#include<bits/stdc++.h>
using namespace std;
int n,m;
int point[500001],price[500001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        a>0?point[i]=a:price[i]=abs(a);
        point[i]+=point[i-1];
        price[i]+=price[i-1];
    }
    while(m--){
        int x,h;
        cin>>x>>h;
        cout<<point[lower_bound(price+x,price+n,price[x]+h)-price-1]-point[x]<<"\n";
    }
    return 0;
}
