#include<bits/stdc++.h>
using namespace std;
int n;
bool arr[45];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<10;++i){
        cin >> n;
        arr[n%42]=true;
    }
    for(int i=0;i<42;++i){
        if(arr[i]) ++cnt;
    }
    cout << cnt;
    return 0;
}
