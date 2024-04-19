#include<bits/stdc++.h>
using namespace std;
int d,m;
string day[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
int arr[12]={31,28,31,30,31,30,31,31,30,31,30};
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> d >> m;
    for(int i=0;i<m-1;++i){
        sum+=arr[i];
    }
    cout << day[(sum+d)%7];
    return 0;
}
