#include<bits/stdc++.h>
using namespace std;
int n;
int dice[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        dice[1]=1;
        dice[2]=2;
        dice[3]=3;
        dice[4]=5;
        dice[5]=4;
        dice[6]=6;
        for(int i=0;s[i]!='\0';++i){
            if(s[i]=='F'){
                int tmp=dice[1];
                dice[1]=dice[4];
                dice[4]=dice[6];
                dice[6]=dice[2];
                dice[2]=tmp;
            }
            else if(s[i]=='B'){
                int tmp=dice[1];
                dice[1]=dice[2];
                dice[2]=dice[6];
                dice[6]=dice[4];
                dice[4]=tmp;
            }
            else if(s[i]=='L'){
                int tmp=dice[1];
                dice[1]=dice[5];
                dice[5]=dice[6];
                dice[6]=dice[3];
                dice[3]=tmp;
            }
            else if(s[i]=='R'){
                int tmp=dice[1];
                dice[1]=dice[3];
                dice[3]=dice[6];
                dice[6]=dice[5];
                dice[5]=tmp;
            }
            else if(s[i]=='C'){
                int tmp=dice[2];
                dice[2]=dice[5];
                dice[5]=dice[4];
                dice[4]=dice[3];
                dice[3]=tmp;
            }
            else if(s[i]=='D'){
                int tmp=dice[2];
                dice[2]=dice[3];
                dice[3]=dice[4];
                dice[4]=dice[5];
                dice[5]=tmp;
            }
        }
        cout<<dice[2]<<' ';
    }
    return 0;
}
