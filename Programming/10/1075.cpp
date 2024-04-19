#include<bits/stdc++.h>
using namespace std;
int n;
pair<long long,long long> p[100000];
double value;
long long sum;
long long s,bill;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int d,c;
        cin>>d>>c;
        p[i].first=c;
        p[i].second=d;
    }
    sort(p,p+n);
    for(int i=0;i<n;++i){
        sum+=p[i].second;
        if((double)sum/p[i].first>value){
            value=(double)sum/p[i].first;
            s=sum;
            bill=p[i].first;
        }
    }
    cout<<s<<" "<<bill;
    return 0;
}
