#include<bits/stdc++.h>
using namespace std;
string s;
bool a=true,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(s[i]=='A') swap(a,b);
        else if(s[i]=='B') swap(b,c);
        else swap(a,c);
    }
    if(a) cout << 1;
    else if(b) cout << 2;
    else cout << 3;
    return 0;
}
