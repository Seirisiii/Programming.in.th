#include<bits/stdc++.h>
using namespace std;
int n;
int x[105],y[105];
double ans=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            for(int k=0;k<n;++k){
                ans=max(ans,(abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2.0));
            }
        }
    }
    printf("%.3lf",ans);
    return 0;
}
