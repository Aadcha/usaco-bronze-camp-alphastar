#include<iostream>
using namespace std;
int main()
{
    int m, n, k;
    cin>>m>>n>>k;
    string a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int o=0;o<k;o++)
        {
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<k;l++)
            cout<<a[i][j];
        }
        cout<<endl;
        }
    }
}
