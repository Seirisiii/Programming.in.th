#include<bits/stdc++.h>
using namespace std;
double n;
double fac(int n){
    if(n==0 or n==1) return 1;
    return n*fac(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if((int)n%2==1) ++n;
    printf("%.0lf",fac(n)/(pow(fac(n/2),2)));
    return 0;
}
