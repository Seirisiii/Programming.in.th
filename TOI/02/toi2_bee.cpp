#include<bits/stdc++.h>
using namespace std;
int day;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>day and day!=-1){
        int q=1,w=1,s=0;
        for(int i=1;i<=day;++i){
            int x=q+w+s;
            s=w;
            w=x;
        }
        cout<<w<<" "<<q+w+s<<"\n";
    }
    return 0;
}

