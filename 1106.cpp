#include<bits/stdc++.h>
using namespace std;
int n,k;
queue<int> num;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=k+1;i<=n;++i){
        num.push(i);
    }
    for(int i=1;i<k;++i){
        num.push(i);
    }
    while(num.size()>1){
        for(int j=1;j<=k;++j){
            if(j!=k)num.push(num.front());
            else{
                k=num.front();
                num.pop();
                break;
            }
			num.pop();
		}
    }
    cout<<num.front();
    return 0;
}

