#include<bits/stdc++.h>
using namespace std;
int n,m,q;
bool magnet[100000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>q;
    while(m--){
        int a,k;
        cin>>a>>k;
        magnet[a-1]=!magnet[a-1];
        magnet[a+k-1]=!magnet[a+k-1];
    }
    //for(int i=0;i<n;++i){
    //    cout<<magnet[i]<<" ";
    //}
    //cout<<"\n";
    while(q--){
        int x;
        cin>>x;
        int L=x-1,R=x;
        while(L>=1 and magnet[L]==false){
            --L;
        }
        while(R<n and magnet[R]==false){
            ++R;
        }
        //cout<<R<<" "<<L<<" ";
        cout<<R-L<<"\n";
    }
    return 0;
}
