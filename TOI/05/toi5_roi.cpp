#include<bits/stdc++.h>
using namespace std;
int c;
int print,cost;
double profit=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    for(double i=1000;i<=15000;i+=500){
        for(double j=74;j<=144;++j){
            double amount=((100-(0.8569*exp(0.09*(j-100))))*i)/100.0;
            double val=amount*j-(i*(100-((i-1000)/500)))-c;
            if(val>0 and val<profit){
                profit=val;
                print=i;
                cost=j;
            }
        }
    }
    printf("%d\n%d\n%.2lf",print,cost,profit);
    return 0;
}