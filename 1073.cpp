#include<bits/stdc++.h>
using namespace std;
int l,t,n;
int mravi[70000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>t>>n;
    for(int i=0;i<n;++i){
        int s;
        char c;
        cin>>s>>c;
        if(c=='D')s+=t;
        else s-=t;
        while(s<0 or s>l){
            s=abs(s);
            if(s>l)s=2*l-s;
        }
        mravi[i]=s;
    }
    sort(mravi,mravi+n);
    for(int i=0;i<n;++i){
        cout<<mravi[i]<<" ";
    }
    return 0;
}
