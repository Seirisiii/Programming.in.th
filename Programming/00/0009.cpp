#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int arr[5];
char s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<3;++i){
        cin >> arr[i];
    }
    sort(arr,arr+3);
    for(int i=0;i<3;++i){
        cin >> s;
        if(s=='A') cout << arr[0] << " ";
        else if(s=='B') cout << arr[1] << " ";
        else cout << arr[2] << " ";
    }
    return 0;
}
