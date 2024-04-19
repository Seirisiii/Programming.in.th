#include<bits/stdc++.h>
using namespace std;
int q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> q;
    while(q--){
        long double x;
        cin >> x;
        printf("%.0Lf\n",pow(2,x));
    }
    return 0;
}
