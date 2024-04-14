#include<bits/stdc++.h>
using namespace std;
int n,cnt;
struct data{
    int x,y,r;
};
bool compare(data a,data b){
    return a.x<b.x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    data s[100005]={};
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i].x>>s[i].y>>s[i].r;
    }
    sort(s,s+n,compare);
    //for(int i=0;i<n;++i){
    //    cout<<s[i].x<<" "<<s[i].y<<" "<<s[i].r<<"\n";
    //}
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(s[j].x-s[i].x>20)break;
            if(pow((s[i].x-s[j].x),2)+pow((s[i].y-s[j].y),2)<pow((s[i].r+s[j].r),2))++cnt;
        }
    }
    cout<<cnt;
    return 0;
}
