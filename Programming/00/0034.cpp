#include<bits/stdc++.h>
using namespace std;
int A,B,C;
int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> A >> B >> C;
    for(int i=1;i<=100;++i){
        a=A/i;
        for(int j=-100;j<=100;++j){
			if(j==0) continue;
			b=C/j;
			if(B==i*b+j*a and A==i*a and C==j*b){
				cout << i << " " << j << " " << a << " " << b;
				return 0;
			}
        }
    }
    cout << "No Solution";
    return 0;
}
