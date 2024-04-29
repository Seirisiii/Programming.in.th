#include<bits/stdc++.h>
using namespace std;
int n;
int dice[7];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        dice[1]=1;
        dice[2]=2;
        dice[3]=3;
        dice[4]=5;
        dice[5]=4;
        dice[6]=6;
        string s;
        cin>>s;
        for(int j=0;j<s.size();++j){
            if(s[j]=='F'){
                int tmp=dice[1];
                dice[1]=dice[4];
                dice[4]=dice[6];
                dice[6]=dice[2];
                dice[2]=tmp;
            }
            else if(s[j]=='B'){
                int tmp=dice[1];
                dice[1]=dice[2];
                dice[2]=dice[6];
                dice[6]=dice[4];
                dice[4]=tmp;
            }
            else if(s[j]=='L'){
                int tmp=dice[1];
                dice[1]=dice[5];
                dice[5]=dice[6];
                dice[6]=dice[3];
                dice[3]=tmp;
            }
            else if(s[j]=='R'){
                int tmp=dice[1];
                dice[1]=dice[3];
                dice[3]=dice[6];
                dice[6]=dice[5];
                dice[5]=tmp;
            }
            else if(s[j]=='C'){
                int tmp=dice[2];
                dice[2]=dice[5];
                dice[5]=dice[4];
                dice[4]=dice[3];
                dice[3]=tmp;
            }
            else if(s[j]=='D'){
                int tmp=dice[2];
                dice[2]=dice[3];
                dice[3]=dice[4];
                dice[4]=dice[5];
                dice[5]=tmp;
            }
        }
        cout<<dice[2]<<" ";
    }
    return 0;
}
