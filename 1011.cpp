#include<bits/stdc++.h>
using namespace std;
int m,n;
int k;
int score;
char block[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>block[i][j];
        }
    }
    cin>>k;
    while(k--){
        int row,col;
		char direct;
		cin>>row>>col>>direct;
		if(block[row][col]=='-' or block[row][col]=='#'){
			score-=5;
			continue;
		}
		int r=row,c=col;
		if(direct=='L')--col;
		else if(direct=='R')++col;
		if(block[row][col]=='#' or block[row][col]!='-'){
			score-=5;
			continue;
		}
		while(block[row+1][col]=='-'){
            ++row;
		}
		if(block[row][col]!='#')swap(block[r][c],block[row][col]);
		bool check=false;
		if(block[row-1][col]==block[row][col]){
            score+=5;
			block[row-1][col]='-';
			check=true;
		}
		if(block[row+1][col]==block[row][col]){
            score+=5;
			block[row+1][col]='-';
			check=true;
		}
		if(block[row][col-1]==block[row][col]){
            score+=5;
			block[row][col+1]='-';
			check=true;
		}
		if(block[row][col+1]==block[row][col]){
            score+=5;
			block[row][col+1]='-';
			check=true;
		}
		if(check){
            score+=5;
			block[row][col]='-';
		}
		for(int i=0;i<m;++i){
			for(int j=0;j<n;++j){
				int rw=i;
				if(block[i][j]!='#' and block[i][j]!='-'){
					while(block[rw+1][j]=='-'){
                        ++rw;
					}
					swap(block[rw][j],block[i][j]);
					if(block[rw-1][j]==block[rw][j]){
                        score+=5;
                        block[rw-1][j]='-';
                        check=true;
                    }
                    if(block[rw+1][j]==block[rw][j]){
                        score+=5;
                        block[rw+1][j]='-';
                        check=true;
                    }
                    if(block[rw][j-1]==block[rw][j]){
                        score+=5;
                        block[rw][j+1]='-';
                        check=true;
                    }
                    if(block[rw][j+1]==block[rw][j]){
                        score+=5;
                        block[rw][j+1]='-';
                        check=true;
                    }
                    if(check){
                        score+=5;
                        block[rw][j]='-';
                    }
				}
				check=false;
			}
		}
    }
    cout<<score<<"\n";
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<block[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
