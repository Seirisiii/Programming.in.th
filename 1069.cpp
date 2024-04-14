#include<bits/stdc++.h>
using namespace std;
int n;
vector<char> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        if(!v.empty()){
            char C=*(v.end()-1);
            if(C==c)v.pop_back();
            else v.push_back(c);
        }
        else v.push_back(c);
    }
    cout<<v.size()<<"\n";
    if(v.empty()){
        cout<<"empty";
        return 0;
    }
    for(int i=v.size()-1;i>=0;--i){
        cout<<v[i];
    }
    return 0;
}
