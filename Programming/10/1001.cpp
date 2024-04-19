#include<bits/stdc++.h>
using namespace std;
int n,m;
char brick[20][20];
int check[20];
int arr[20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>brick[i][j];
        }
    }
    for(int i=0;i<m;++i){
        check[i]=n;
    }
    for(int i=n-1;i>=0;--i){
        for(int j=0;j<m;++j){
            if(brick[i][j]=='O')check[j]=i;
        }
    }
    for(int i=0;i<m;++i){
        cin>>arr[i];
    }
    for(int i=0;i<m;++i){
        while(check[i]-- and arr[i]--){
            brick[check[i]][i]='#';
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<brick[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
