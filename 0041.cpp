#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if(n==1) cout << "2.000000";
    else if(n==3) printf("%.6lf",2+sqrt(3));
    else if(n%2==0) printf("%.6lf",(double)n);
    else printf("%.6lf",n-3+2*sqrt(3));
    return 0;
}
