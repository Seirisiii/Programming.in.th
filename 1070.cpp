#include<bits/stdc++.h>
using namespace std;
int n;
int branch[100000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>branch[i];
    }
    sort(branch,branch+n);
    if(branch[0]+branch[1]>branch[n-1] or n<3)cout<<"no";
    else cout<<"yes";
    return 0;
}
