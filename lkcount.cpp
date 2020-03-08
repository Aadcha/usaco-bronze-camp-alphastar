#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n,m;
char a[110][110];
int visited[110][110];
int dirx[8]={1,1,1,0,0,-1,-1,-1};
int diry[8]={1,0,-1,1,-1,1,0,-1};
int ans=1;
void floodfill(int x,int y,int ans){
    visited[x][y]=ans;
    for(int i=0;i<8;i++){
        if(a[x+dirx[i]][y+diry[i]]=='W'&&visited[x+dirx[i]][y+diry[i]]==0)
					floodfill(x+dirx[i], y+diry[i], ans);
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
					cin>>a[i][j];
				}
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='W'&&visited[i][j]==0){
                floodfill(i,j,ans++);
            }
        }
    }
    cout<<ans-1;
}
 
