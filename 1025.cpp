#include<bits/stdc++.h>
using namespace std;
int n;
long long gcd;
long long lcm;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        long long x;
        cin>>x;
        if(i==0){
            lcm=x;
            gcd=x;
        }
        else{
            long long mul=lcm*x;;
            gcd=__gcd(lcm,x);
            lcm=mul/gcd;
        }
    }
    cout<<lcm;
    return 0;
}
