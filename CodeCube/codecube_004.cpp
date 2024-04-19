#include <bits/stdc++.h>
using namespace std;
long long int n,h[100000],sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>h[0];
    if(n==1){
        cout<<h[0];
        return 0;
    }
    long long gcd=h[0];
    for(int i=1;i<n;++i){
        cin>>h[i];
        gcd=__gcd(h[i],gcd);
    }
    for(int i=0;i<n;++i){
        sum+=h[i]/gcd;
    }
    cout<<sum;
    return 0;
}