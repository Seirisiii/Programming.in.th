#include<bits/stdc++.h>
using namespace std;
int n;
int s[21],h[21];
int mxi,mxj;
char arr[10][79];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i]>>h[i];
        mxi=max(mxi,h[i]);
        mxj=max(mxj,s[i]+h[i]*2-1);
    }
    for(int i=0;i<mxi;++i){
        for(int j=0;j<mxj;++j){
            arr[i][j]='.';
        }
    }
    for(int i=0;i<n;++i){
        int tmp=0;
        for(int j=mxi-1;j>=mxi-h[i];--j){
            int x1=s[i]+tmp-1;
            int x2=s[i]+h[i]*2-1-tmp-1;
            if(arr[j][x1]=='\\')arr[j][x1]='v';
            else if(arr[j][x1]=='.')arr[j][x1]='/';
            if(arr[j][x2]=='/')arr[j][x2]='v';
            else if(arr[j][x2]=='.')arr[j][x2]='\\';
            for(int k=x1+1;k<x2;++k){
                arr[j][k]='X';
            }
            ++tmp;
        }
    }
    for(int i=0;i<mxi;++i){
        for(int j=0;j<mxj;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}