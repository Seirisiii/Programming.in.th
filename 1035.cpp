#include<bits/stdc++.h>
using namespace std;
int n;
bool palindome(int x){
    int tmp=x,y=0;
    while(tmp!=0){
        y*=10;
        y+=tmp%10;
        tmp/=10;
    }
    if(x==y)return true;
    else return false;
}
bool prime(int x){
    for(int i=2;i<=sqrt(x);++i){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(true){
        if(palindome(n) and prime(n)){
            cout<<n;
            break;
        }
        else ++n;
    }
    return 0;
}
