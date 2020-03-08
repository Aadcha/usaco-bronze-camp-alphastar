#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int b[2001][2001];
int main() {
    int N=0,ans=1001,x=1000,y=1000,t=0,x1=0,y2=0,s=0;
    string a;
    for (int i=0;i<2001;i++){
        for (int j=0;j<2001;j++)
            b[i][j]=-1;
    }
    b[x][y]=0;
    cin>> N;
    for (int i=0;i<N;i++){
        x1=0;
        y2=0;
        cin>>a;
        if (a.compare("N")==0)
            y2=1;
        else if(a.compare("S")==0)
            y2=-1;
        else if(a.compare("W") == 0)
            x1=-1;
        else
            x1=1;
        cin>>s;
        for (int j=0;j<s;j++){
            x+=x1;
            y+=y2;
            t++;
             if (b[x][y]>=0&&t-b[x][y]<ans)
                ans=t-b[x][y];
            b[x][y]=t;
        }
    }
    if(ans==1001)
        ans=-1;
    cout<<ans<<endl;
    return 0;
}
