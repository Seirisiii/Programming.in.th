#include<bits/stdc++.h>
using namespace std;
int m,n;
char arr[25][25];
int k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
            arr[i][j]=tolower(arr[i][j]);
        }
    }
    cin>>k;
    while(k--){
        bool check=false;
        string s;
        cin>>s;
        for(int i=0;i<s.size();++i){
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(arr[i][j]==s[0]){
                    if(i-s.size()+1>=0){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i-l][j])break;
                            if(l==s.size()-1 and s[l]==arr[i-l][j]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(i-s.size()+1>=0 and j+s.size()-1<n){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i-l][j+l])break;
                            if(l==s.size()-1 and s[l]==arr[i-l][j+l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(j+s.size()-1<n){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i][j+l])break;
                            if(l==s.size()-1 and s[l]==arr[i][j+l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(i+s.size()-1<m and j+s.size()-1<n){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i+l][j+l])break;
                            if(l==s.size()-1 and s[l]==arr[i+l][j+l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(i+s.size()-1<m){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i+l][j])break;
                            if(l==s.size()-1 and s[l]==arr[i+l][j]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(i+s.size()-1<m and j-s.size()+1>=0){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i+l][j-l])break;
                            if(l==s.size()-1 and s[l]==arr[i+l][j-l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(j-s.size()+1>=0){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i][j-l])break;
                            if(l==s.size()-1 and s[l]==arr[i][j-l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                    if(check)break;
                    if(i-s.size()+1>=0 and j-s.size()+1>=0){
                        for(int l=1;l<s.size();++l){
                            if(s[l]!=arr[i-l][j-l])break;
                            if(l==s.size()-1 and s[l]==arr[i-l][j-l]){
                                cout<<i<<" "<<j<<"\n";
                                check=true;
                            }
                        }
                    }
                }
            }
            if(check)break;
        }
    }
    return 0;
}