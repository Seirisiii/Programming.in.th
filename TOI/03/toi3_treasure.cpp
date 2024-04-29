#include<bits/stdc++.h>
using namespace std;
string s;
double x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>s and s!="*"){
        double num=0;
        string str="";
        for(auto i:s){
            if(i>='0' and i<='9'){
                num*=10;
                num+=i-'0';
            }
            else str+=i;
        }
        if(str.size()==2)num/=sqrt(2);
        if(str=="N")y+=num;
        else if(str=="NE")x+=num,y+=num;
        else if(str=="E")x+=num;
        else if(str=="SE")x+=num,y-=num;
        else if(str=="S")y-=num;
        else if(str=="SW")x-=num,y-=num;
        else if(str=="W")x-=num;
        else if(str=="NW")x-=num,y+=num;
    }
    printf("%.3lf %.3lf\n%.3lf",x,y,sqrt(x*x+y*y));
    return 0;
}