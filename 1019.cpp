#include<bits/stdc++.h>
using namespace std;
string a,b;
char ans[205];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for(int i=0;i<a.size();++i){
        for(int j=0;j<b.size();++j){
            int idx=0,sa=i,sb=j;
            char cone[205];
            while(a[sa]==b[sb] and sa<a.size() and sb<b.size()){
                cone[idx]=a[sa];
                ++sa,++sb,++idx;
                cone[idx+1]='\0';
                if(mx<idx){
                    mx=idx;
                    strcpy(ans,cone);
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
