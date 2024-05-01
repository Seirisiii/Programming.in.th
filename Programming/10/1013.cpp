#include<bits/stdc++.h>
using namespace std;
string p;
int n;
string solve(int idx,string str){
    vector<string> v;
    string temp;
    int bracket=0;
    for(int i=0;i<str.size();++i){
        if(str[i]=='(')++bracket;
        else if(str[i]==')')--bracket;
        if(bracket==0 and str[i]=='+'){
            v.push_back(temp);
            temp="";
            continue;
        }
        temp+=str[i];
    }
    if(v.size()>0)v.push_back(temp);
    if(v.empty()){
        temp="";
        bracket=0;
        for(int i=0;i<str.size();++i){
            if(str[i]=='(')++bracket;
            else if(str[i]==')')--bracket;
            if(bracket==0 and str[i]=='*'){
                v.push_back(temp);
                temp="";
                continue;
            }
            temp+=str[i];
        }
        if(v.size()>0)v.push_back(temp);
    }
    if(v.empty()){
        temp="";
        bracket=0;
        for(int i=0;i<str.size();++i){
            if(str[i]=='(')++bracket;
            else if(str[i]==')')--bracket;
            if(bracket==0 and str[i]=='^'){
                v.push_back(temp);
                temp="";
                continue;
            }
            temp+=str[i];
        }
        if(v.size()>0)v.push_back(temp);
    }
    if(v.empty()){
        temp=str;
        if(temp[0]=='(' and temp[temp.size()-1]==')'){
            temp.erase(0,1);
            temp.pop_back();
            v.push_back(temp);
        }
    }
    if(v.size()>=idx)return v[idx-1];
    if(idx==1)return str;
    return "null";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>p;
    cin>>n;
    while(n--){
        int x;
        stack<int> s;
        string tmp=p;
        while(cin>>x and x!=0){
            s.push(x);
            tmp=solve(x,tmp);
        }
        string op="p";
        while(!s.empty()){
            cout<<"op("<<s.top()<<",";
            s.pop();
            op+=")";
        }
        cout<<op<<"="<<tmp<<"\n";
    }
    return 0;
}
