#include<iostream>
using namespace std;
int x[1000];
int y[1000];
int count=0;
int main()
{
    int n, m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
            a[i][j]='#';
    }
   // cout<<a[0][m]<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    }/*
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
            cout<<a[i][j];
        cout<<endl;
    }/**/
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            bool ycheck=(a[i-1][j]=='#' && a[i+1][j]=='.' && a[i+2][j]=='.' && a[i][j]=='.');
            bool xcheck=(a[i][j-1]=='#' && a[i][j]=='.' && a[i][j+1]=='.' && a[i][j+2]=='.');

            if((xcheck || ycheck) && (i<=n && j<=m))
            {
               // cout<<a[i-1][j]<<" "<<a[i+1][j]<<" "<<a[i+2][j]<<" "<<a[i][j]<<endl;
                x[count]=i;
                y[count]=j;
                count++;
              //  cout<<i<<" "<<j<<endl;
            }
        }/*
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
                cout<<a[i][j];
        cout<<endl;
        }*/
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }
}
