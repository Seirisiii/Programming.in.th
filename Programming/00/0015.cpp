#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    if(b-a>c-b) cout << b-a-1;
    else cout << c-b-1;
    return 0;
}

