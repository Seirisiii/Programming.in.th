#include<bits/stdc++.h>
using namespace std;
int score[4][4];
struct football{
    string name;
    int goals=0;
    int sum=0;
    int diff=0;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    football team[4];
    for(int i=0;i<4;++i){
        cin>>team[i].name;
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            cin>>score[i][j];
            team[i].sum+=score[i][j];
        }
        team[i].diff=team[i].sum;
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            team[i].diff-=score[j][i];
        }
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(i==j)continue;
            if(score[i][j]>score[j][i])team[i].goals+=3;
            else if(score[i][j]<score[j][i])team[j].goals+=3;
            else{
                ++team[i].goals;
                ++team[j].goals;
            }
        }
    }
    for(int i=0;i<4;++i){
        for(int j=i+1;j<4;++j){
            if(team[i].goals<team[j].goals)swap(team[i],team[j]);
            else if(team[i].goals==team[j].goals){
                    if(team[i].diff<team[j].diff)swap(team[i],team[j]);
                    else if(team[i].sum<team[j].sum)swap(team[i],team[j]);
            }
        }
    }
    for(int i=0;i<4;++i){
        cout<<team[i].name<<" "<<team[i].goals/2<<"\n";
    }
    return 0;
}
/*
Denmark
Netherlands
Cameroon
Japan
0 0 2 1
2 0 2 1
1 1 0 0
3 0 1 0
*/
