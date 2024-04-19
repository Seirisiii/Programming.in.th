#include<bits/stdc++.h>
using namespace std;
int n;
int s,m;
vector<char> vec;
char arr[10][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s>>m;
    int i=(s-1)/3;
    int j=(s-1)%3;
    if(s!=1)vec.push_back(arr[s][(m-1)%strlen(arr[s])]);
    while(--n){
        int h,v;
        cin>>h>>v>>m;
        i+=v;
        j+=h;
        s=i*3+j+1;
        if(s!=1)vec.push_back(arr[s][(m-1)%strlen(arr[s])]);
        else while(m-- and !vec.empty())vec.pop_back();
    }
    if(!vec.empty()){
        for(auto i:vec){
            cout<<i;
        }
    }
    else cout<<"null";
    return 0;
}
