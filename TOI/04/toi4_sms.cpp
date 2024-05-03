#include<bits/stdc++.h>
using namespace std;
int n;
int s,m;
string str[9]={"","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
string res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>s>>m;
    --s;
    if(s!=0)res+=str[s][(m-1)%str[s].size()];
    int i=s/3;
    int j=s%3;
    while(--n){
        int h,v;
        cin>>h>>v>>m;
        i+=v;
        j+=h;
        s=i*3+j;
        if(s!=0)res+=str[s][(m-1)%str[s].size()];
        else while(m-- and !res.empty())res.pop_back();
    }
    if(!res.empty())cout<<res;
    else cout<<"null";
    return 0;
}