#include<bits/stdc++.h>
using namespace std;
char s[105];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);++i){
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
            s[i+1]='X';
            s[i+2]='X';
        }
    }
    for(int i=0;i<strlen(s);++i){
        if(s[i]!='X') cout << s[i];
    }
    return 0;
}
