#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int arr[10];
bool check[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;++i){
        arr[i]=i;
    }
    cin >> m;
    for(int i=0;i<m;++i){
        int x;
        cin >> x;
        check[x]=true;
    }
    do{
        if(check[arr[1]]) continue;
        for(int i=1;i<=n;++i){
            cout << arr[i] << " ";
        }
        cout << endl;
    }while(next_permutation(arr+1,arr+n+1));
    return 0;
}
