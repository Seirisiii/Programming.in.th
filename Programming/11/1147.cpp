#include<bits/stdc++.h>
using namespace std;
struct SegmentTree{
    int n;
    int *tree;
};
int n,q;
void build(int *tree,int *arr,int node,int start,int end){
    if(start==end)tree[node]=arr[start];
    else{
        int mid=(start+end)/2;
        build(tree,arr,2*node,start,mid);
        build(tree,arr,2*node+1,mid+1,end);
        tree[node]=tree[2*node]>tree[2*node+1]?tree[2*node]:tree[2*node+1];
    }
}
void update(int *tree,int node,int start,int end,int idx,int val){
    if(start==end)tree[node]=val;
    else{
        int mid=(start+end)/2;
        if(start<=idx and idx<=mid)update(tree,2*node,start,mid,idx,val);
        else update(tree,2*node+1,mid+1,end,idx,val);
        tree[node]=tree[2*node]>tree[2*node+1]?tree[2*node]:tree[2*node+1];
    }
}
int query(int *tree,int node,int start,int end,int left,int right){
    if(left>end or right<start)return INT_MIN;
    if(left<=start and right>=end)return tree[node];
    int mid=(start+end)/2;
    int left_max=query(tree,2*node,start,mid,left,right);
    int right_max=query(tree,2*node+1,mid+1,end,left,right);
    return left_max>right_max?left_max:right_max;
}
SegmentTree* createSegmentTree(int *arr,int size){
    SegmentTree* segmentTree=(SegmentTree*)malloc(sizeof(SegmentTree));
    segmentTree->n=size;
    segmentTree->tree=(int*)calloc(4*size,sizeof(int));
    build(segmentTree->tree,arr,1,0,size-1);
    return segmentTree;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    int *arr=(int*)calloc(n,sizeof(int));
    SegmentTree* segmentTree=createSegmentTree(arr,n);
    while(q--){
        char c;
        cin>>c;
        if(c=='U'){
            int idx,val;
            cin>>idx>>val;
            update(segmentTree->tree,1,0,segmentTree->n-1,idx-1,val);
        }
        else if(c=='P'){
            int left,right;
            cin>>left>>right;
            cout<<query(segmentTree->tree,1,0,segmentTree->n-1,left-1,right-1)<<"\n";
        }
    }
    return 0;
}
