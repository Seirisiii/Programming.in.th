#include<bits/stdc++.h>
using namespace std;
int n;
string a="ABC";
string b="BABC";
string c="CCAABB";
int a1,b1,c1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;++i){
        char s;
        cin >> s;
        if(s==a[i%3]) ++a1;
        if(s==b[i%4]) ++b1;
        if(s==c[i%6]) ++c1;
    }
    int mx=max(max(a1,b1),c1);
    cout << mx << endl;
    if(a1==mx) cout << "Adrian" << endl;
    if(b1==mx) cout << "Bruno" << endl;
    if(c1==mx) cout << "Goran" << endl;
    return 0;
}

