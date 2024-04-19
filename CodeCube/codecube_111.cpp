#include<bits/stdc++.h>
using namespace std;
int p,s,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>p>>s>>r;
    if(p+s+r==100){
        if(p>s and p>r)cout<<"PAPER";
        else if(s>p and s>r)cout<<"SCISSORS";
        else if(r>p and r>s)cout<<"ROCK";
        else cout<<"I DON'T KNOW";
    }
    else cout<<"BUG";
    return 0;
}