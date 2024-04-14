#include<bits/stdc++.h>
using namespace std;
string s;
long long sum3,sum11;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    long long n=s.size();
    for(int i=0;i<n;++i){
        sum3+=s[i]-'0';
    }
    if(n%2==0){
        for(int i=0;i<n;++i){
            if(i%2==0) sum11-=s[i]-'0';
            else sum11+=s[i]-'0';
        }
    }
    else{
        for(int i=0;i<n;++i){
            if(i%2==0) sum11+=s[i]-'0';
            else sum11-=s[i]-'0';
        }
    }
    if(sum11<0) sum11=11+(sum11%11);
    cout << sum3%3 << " " << abs(sum11%11);
    return 0;
}
