#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        string a,b;
        string s1,s2;
        cin >> a >> b;
        s1+=a[0];
        s2+=b[0];
        for(int i=1;i<a.size();++i){
            if(a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]=='h' or a[i]=='w' or a[i]=='y') continue;
            else if(a[i]=='b' or a[i]=='f' or a[i]=='p' or a[i]=='v') s1+='1';
            else if(a[i]=='c' or a[i]=='g' or a[i]=='j' or a[i]=='k' or a[i]=='q' or a[i]=='s' or a[i]=='x' or a[i]=='z') s1+='2';
            else if(a[i]=='d' or a[i]=='t') s1+='3';
            else if(a[i]=='l') s1+='4';
            else if(a[i]=='m' or a[i]=='n') s1+='5';
            else s1+='6';
        }
        for(int i=1;i<b.size();++i){
            if(b[i]=='a' or b[i]=='e' or b[i]=='i' or b[i]=='o' or b[i]=='u' or b[i]=='h' or b[i]=='w' or b[i]=='y') continue;
            else if(b[i]=='b' or b[i]=='f' or b[i]=='p' or b[i]=='v') s2+='1';
            else if(b[i]=='c' or b[i]=='g' or b[i]=='j' or b[i]=='k' or b[i]=='q' or b[i]=='s' or b[i]=='x' or b[i]=='z') s2+='2';
            else if(b[i]=='d' or b[i]=='t') s2+='3';
            else if(b[i]=='l') s2+='4';
            else if(b[i]=='m' or b[i]=='n') s2+='5';
            else s2+='6';
        }
        string x={},y={};
        x+=s1[0];
        y+=s2[0];;
        char c;
        c=s1[0];
        for(int i=1;i<s1.size();++i){
            if(s1[i]!=c){
            x+=s1[i];
            c=s1[i];
            }
            if(x.size()==4) break;
        }
        c=s2[0];
        for(int i=1;i<s2.size();++i){
            if(s2[i]!=c){
            y+=s2[i];
            c=s2[i];
            }
            if(y.size()==4) break;
        }
        //cout << x.size()  << " " << y.size() << endl;
        //cout << x  << " " << y << endl;
        while(x.size()<4) x+='0';
        while(y.size()<4) y+='0';
        //cout << x.size()  << " " << y.size() << endl;
        if(x==y) cout << x << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
/*
2
Programming Porokeremon
Kaaa Kaaw
*/
