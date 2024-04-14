#include<bits/stdc++.h>
using namespace std;
int q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while(q--){
        bool check=false;
        stack<char> s;
        string str;
        cin>>str;
        for(auto i:str){
            if(i=='(' or i=='[' or i=='{')s.push(i);
            else if(i==')'){
                if(s.empty() or s.top()!='('){
                    cout<<"no\n";
                    check=true;
                    break;
                }
                else s.pop();
            }
            else if(i==']'){
                if(s.empty() or s.top()!='['){
                    cout<<"no\n";
                    check=true;
                    break;
                }
                else s.pop();
            }
            else if(i=='}'){
                if(s.empty() or s.top()!='{'){
                    cout<<"no\n";
                    check=true;
                    break;
                }
                else s.pop();
            }
        }
        if(check)continue;
        if(!s.empty())cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}
