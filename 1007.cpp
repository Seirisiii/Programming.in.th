#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        int year;
        int b1=1,b2=0;
        int i=0,j=0;
        cin>>year;
        if(year==-1)break;
        while(year--){
            i=b1;
            j=b2;
            b1=i+j+1;
            b2=i;
        }
        cout<<b1<<" "<<b1+b2+1<<"\n";
    }
    return 0;
}
