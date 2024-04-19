#include<bits/stdc++.h>
using namespace std;
long long n,n1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>n1;
    long long n2=n1;
    for(int i=1;i<n;++i){
        cin>>n1;
        n2=n2*n1/__gcd(n2,n1);
    }
    cout<<n2;
    return 0;
}