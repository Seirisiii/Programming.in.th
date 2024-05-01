#include<bits/stdc++.h>
using namespace std;
int l,k;
string lock1,lock2,key;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>k>>lock1>>lock2>>key;
    for(int i=0;i<k;++i){
        for(int j=0;j<l;++j){
            char list[3]={lock1[j],lock2[j],key[i]};
            sort(list,list+3);
            key[i]=list[1];
        }
    }
    cout<<key;
    return 0;
}