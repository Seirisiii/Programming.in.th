#include<bits/stdc++.h>
using namespace std;
int n;
int l,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if(n%2==0){
        l=n/2-1;
        r=n/2-1;
        for(int i=0;i<n;++i){
            for(int j=0;j<n-1;++j){
                if(j==r or j==l) cout << "*";
                else cout << "-";
            }
            if(i>=n/2){
                ++l;
                --r;
            }
            if(i<n/2-1){
                --l;
                ++r;
            }
            cout << endl;
        }
    }
    else{
        l=n/2;
        r=n/2;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(j==r or j==l) cout << "*";
                else cout << "-";
            }
            if(i>=n/2){
                ++l;
                --r;
            }
            else{
                --l;
                ++r;
            }
            cout << endl;
        }
    }
    return 0;
}
