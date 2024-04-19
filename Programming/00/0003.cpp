#include<bits/stdc++.h>
using namespace std;
int m,n;
int arr[105][105];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            int x;
            cin >> x;
            arr[i][j]+=x;
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

