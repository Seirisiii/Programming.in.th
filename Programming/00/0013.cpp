#include<bits/stdc++.h>
using namespace std;
int sum;
int arr[10];
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<9;++i){
        cin >> arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<9;++i){
        for(int j=i+1;j<9;++j){
            if(sum-arr[i]-arr[j]==100){
                arr[i]=0;
                arr[j]=0;
                check=true;
                break;
            }
        }
        if(check) break;
    }
    for(int i=0;i<9;++i){
        if(arr[i]!=0) cout << arr[i] << endl;
    }
    return 0;
}
