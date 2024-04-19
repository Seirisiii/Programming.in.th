#include<bits/stdc++.h>
using namespace std;
int n;
const int N='z'-'X'+1;
vector<int> v;
vector<int> si[N][N];
vector<int> vec[N];
bool visited[N];
queue<int> q;
double sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        char s,e;
        int c;
        cin>>s>>e>>c;
        si[s-'X'][e-'X'].push_back(c);
        si[e-'X'][s-'X'].push_back(c);
        vec[s-'X'].push_back(e-'X');
        vec[e-'X'].push_back(s-'X');
    }
    q.push(0);
    visited[0]=true;
    while(!q.empty()){
        v.push_back(q.front());
        for(auto i:vec[q.front()]){
            if(visited[i])continue;
            q.push(i);
            visited[i]=true;
            break;
        }
        q.pop();
    }
    if(!visited[1]){
        cout<<"broken";
        return 0;
    }
    for(int i=0;i<v.size()-1;++i){
        int u1=v[i],u2=v[i+1];
        double ans;
        sort(si[u1][u2].begin(),si[u1][u2].end());
        int z=si[u1][u2].size();
        if(z%2)ans=si[u1][u2][z/2];
        else ans=(si[u1][u2][z/2-1]+si[u1][u2][z/2])/2.0;
        printf("%c %c %.1lf\n",u1+'X',u2+'X',ans);
        sum+=ans;
    }
    printf("%.1lf",sum);
    return 0;
}
