#include<bits/stdc++.h>
using namespace std;
int arr[3];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> arr[0] >> arr[1] >> arr[2];
    for(int i=0;i<3;++i){
        while(arr[i]>1){
            arr[i]/=2;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
