#include<bits/stdc++.h>
using namespace std;
string s;
bool A,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(s[i]>='A' and s[i]<='Z') A=true;
        if(s[i]>='a' and s[i]<='z') a=true;
    }
    if(A and a) cout << "Mix";
    else if(A) cout << "All Capital Letter";
    else cout << "All Small Letter";
    return 0;
}
