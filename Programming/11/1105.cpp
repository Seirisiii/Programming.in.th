#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[1000000];
void combine(int l,int mid,int r){
    int L=mid-l+1;
    int R=r-mid;
    int arrL[L];
    int arrR[R];
    for(int i=l;i<=mid;++i){
        arrL[i-l]=arr[i];
    }
    for(int i=mid+1;i<=r;++i){
        arrR[i-mid-1]=arr[i];
    }
    int i=0,j=0,k=l;
    while(i<L and j<R){
        if(arrL[i]>arrR[j]){
            arr[k]=arrL[i];
            ++i;
        }
        else{
            arr[k]=arrR[j];
            ++j;
        }
        ++k;
    }
    while(i<L){
        arr[k]=arrL[i];
        ++i;
        ++k;
    }
    while(j<R){
        arr[k]=arrR[j];
        ++j;
        ++k;
    }
    return ;
}
void mergesort(int l,int r){
    if(l>=r)return ;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    combine(l,mid,r);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    mergesort(0,n-1);
    cout<<arr[k-1];
    return 0;
}
