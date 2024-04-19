#include<bits/stdc++.h>
using namespace std;
int n,d;
int I,V,X,L,C;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        d=i;
        while(d){
            if(d>=100){
                ++C;
                d-=100;
            }
            else if(d>=90){
                ++C;
                ++X;
                d-=90;
            }
            else if(d>=50){
                ++L;
                d-=50;
            }
            else if(d>=40){
                ++L;
                ++X;
                d-=40;
            }
            else if(d>=10){
                ++X;
                d-=10;
            }
            else if(d>=9){
                ++X;
                ++I;
                d-=9;
            }
            else if(d>=5){
                ++V;
                d-=5;
            }
            else if(d>=4){
                ++V;
                ++I;
                d-=4;
            }
            else if(d>=1){
                ++I;
                d-=1;
            }
        }
    }
    cout<<I<<" "<<V<<" "<<X<<" "<<L<<" "<<C;
    return 0;
}

