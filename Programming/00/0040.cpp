#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(((s[s.size()-1]-'0')==2 and s.size()==1) or (s[s.size()-1]-'0')%2==1){
            cout << "T" << endl;
        }
        else cout << "F" << endl;
    }
    return 0;
}
