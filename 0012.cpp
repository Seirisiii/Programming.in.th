#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(int i=0;i<5;++i){
        for(int j=0;j<s.size();++j){
            if((j+1)%3==0){
                if(i==0) cout << "..*.";
                else if(i==1) cout << ".*.*";
                else if(i==2) cout << "*." << s[j] << ".*";
                else if(i==3) cout << ".*.*";
                else cout << "..*.";
            }
            else{
                if(i==0) cout << "..#.";
                else if(i==1) cout << ".#.#";
                else if(i==2 and j%3==0 and j!=0) cout << "." << s[j] << ".";
                else if(i==2) cout << "#." << s[j] << ".";
                else if(i==3) cout << ".#.#";
                else cout << "..#.";
            }
        }
        if(i==2 and s.size()%3==0){
            cout << endl;
            continue;
        }
        else if(i==2 and s.size()%3!=0) cout << "#";
        else cout << ".";
        cout << endl;
    }
    return 0;
}
