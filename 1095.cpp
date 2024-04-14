#include<bits/stdc++.h>
using namespace std;
int r,c;
char arr[10][10];
int k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    cin>>k;
    int d=r+c-1;
    if(k==0 or k==360){
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
    else if(k==45){
        int i=0,j=0,s=r-1;
        bool mid=false;
        for(int l=0;l<d;++l){
            for(int m=0;m<s;++m){
                cout<<" ";
            }
            cout<<arr[i][j]<<" ";
            for(int m=i-1,n=j+1;m>=0 and n<c;--m,++n) {
                cout<<arr[m][n]<<" ";
            }
            if(l>=r-1)mid=true;
            if(mid){
                ++j;
                ++s;
            }
            else{
                ++i;
                --s;
            }
            cout<<"\n";
        }
    }
    else if(k==90){
        for(int i=0;i<c;++i){
            for(int j=r-1;j>=0;--j){
                cout<<arr[j][i];
            }
            cout<<"\n";
        }
    }
    else if(k==135){
        int i=r-1,j=0,s=c-1;
        bool mid=false;
        for(int l=0;l<d;++l){
            for(int m=0;m<s;++m){
                cout<<" ";
            }
            cout<<arr[i][j]<<" ";
            for(int m=i-1,n=j-1;m>=0 and n>=0;--m,--n) {
                cout<<arr[m][n]<<" ";
            }
            if(l>=c-1)mid=true;
            if(mid){
                --i;
                ++s;
            }
            else{
                ++j;
                --s;
            }
            cout<<"\n";
        }
    }
    else if(k==180){
        for(int i=r-1;i>=0;--i){
            for(int j=c-1;j>=0;--j){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
    else if(k==225){
        int i=r-1,j=c-1,s=r-1;
        bool mid=false;
        for(int l=0;l<d;++l){
            for(int m=0;m<s;++m){
                cout<<" ";
            }
            cout<<arr[i][j]<<" ";
            for(int m=i+1,n=j-1;m<r and n>=0;++m,--n) {
                cout<<arr[m][n]<<" ";
            }
            if(l>=r-1)mid=true;
            if(mid){
                --j;
                ++s;
            }
            else{
                --i;
                --s;
            }
            cout<<"\n";
        }
    }
    else if(k==270){
        for(int i=c-1;i>=0;--i){
            for(int j=0;j<r;++j){
                cout<<arr[j][i];
            }
            cout<<"\n";
        }
    }
    else if(k==315){
        int i=0,j=c-1,s=c-1;
        bool mid=false;
        for(int l=0;l<d;++l){
            for(int m=0;m<s;++m){
                cout<<" ";
            }
            cout<<arr[i][j]<<" ";
            for(int m=i+1,n=j+1;m<r and n<c;++m,++n) {
                cout<<arr[m][n]<<" ";
            }
            if(l>=c-1)mid=true;
            if(mid){
                ++i;
                ++s;
            }
            else{
                --j;
                --s;
            }
            cout<<"\n";
        }
    }
    return 0;
}
