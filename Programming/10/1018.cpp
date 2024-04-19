#include<bits/stdc++.h>
using namespace std;
int n,x,y;
bool ch;
string s;
char t='E';
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int k;
        cin>>s;
        cin>>k;
        if(s[0]=='F'){
            if(t=='E')x+=k;
            else if(t=='S')y-=k;
            else if(t=='W')x-=k;
            else if(t=='N')y+=k;
        }
        else if(s[0]=='L'){
            if(t=='E'){
                t='N';
                y+=k;
            }
            else if(t=='S'){
                t='E';
                x+=k;
            }
            else if(t=='W'){
                t='S';
                y-=k;
            }
            else if(t=='N'){
                t='W';
                x-=k;
            }
        }
        else if(s[0]=='R'){
            if(t=='E'){
                t='S';
                y-=k;
            }
            else if(t=='S'){
                t='W';
                x-=k;
            }
            else if(t=='W'){
                t='N';
                y+=k;
            }
            else if(t=='N'){
                t='E';
                x+=k;
            }
        }
        else if(s[0]=='B'){
            if(t=='E'){
                t='W';
                x-=k;
            }
            else if(t=='S'){
                t='N';
                y+=k;
            }
            else if(t=='W'){
                t='E';
                x+=k;
            }
            else if(t=='N'){
                t='S';
                y-=k;
            }
        }
        if(x>=50000 or x<=-50000 or y>=50000 or y<=-50000){
            cout<<"DEAD";
            ch=true;
            break;
        }
    }
    if(!ch)cout<<x<<" "<<y<<"\n"<<t;
    return 0;
}

