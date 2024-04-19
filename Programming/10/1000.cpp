#include<bits/stdc++.h>
using namespace std;
int l,n;
string s,str;
bool check=true;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>n;
    cin>>s;
    for(int i=1;i<n;++i){
        cin>>str;
        int cnt=0;
        if(check){
            for(int j=0;j<l;++j){
                if(s[j]==str[j])++cnt;
            }
            if(cnt>=l-2)s=str;
            else check=false;
        }
    }
    cout<<s;
    return 0;
}
