#include<bits/stdc++.h>
using namespace std;
string a,b;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    cin >> c;
    cin >> b;
    if(c=='*'){
        int x=b.size();
        for(int i=0;i<x-1;++i){
            a+='0';
        }
        cout << a;
        return 0;
    }
    else{
        int x=a.size();
        int y=b.size();
        if(x==y){
            string str="2";
            for(int i=0;i<x-1;++i){
                str+='0';
            }
            cout << str;
            return 0;
        }
        else{
            int x=a.size();
            int y=b.size();
            if(x<y) swap(x,y);
            string str="1";
            for(int i=0;i<x-1;++i){
                if(i==x-y-1) str+='1';
                else str+='0';
            }
            cout << str;
            return 0;
        }
    }
    return 0;
}
