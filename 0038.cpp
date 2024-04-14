#include<bits/stdc++.h>
using namespace std;
int n;
string s[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;++i){
        if(s[i]==s[i-1]) continue;
        cout << s[i] << endl;
    }
    return 0;
}
