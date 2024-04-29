#include<bits/stdc++.h>
using namespace std;
int a,b;
string s;
string sa[10],sb[10];
int check(string s){
    if(s=="     |  |")return 1;
    else if(s==" _  _||_ ")return 2;
    else if(s==" _  _| _|")return 3;
    else if(s=="   |_|  |")return 4;
    else if(s==" _ |_  _|")return 5;
    else if(s==" _ |_ |_|")return 6;
    else if(s==" _   |  |")return 7;
    else if(s==" _ |_||_|")return 8;
    else if(s==" _ |_| _|")return 9;
    return 0;
}
long long solve(string str[],int x){
    long long num=0;
    for(int i=0;i<x;++i){
        num*=10;
        num+=check(str[i]);
    }
    return num;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    getline(cin,s);
    for(int i=0;i<3;++i){
        getline(cin,s);
        for(int j=0;j<s.size();++j){
            if((j+1)%4==0)continue;
            sa[j/4]+=s[j];
        }
    }
    for(int i=0;i<3;++i){
        getline(cin,s);
        for(int j=0;j<s.size();++j){
            if((j+1)%4==0)continue;
            sb[j/4]+=s[j];
        }
    }
    cout<<solve(sa,a)+solve(sb,b);
    return 0;
}