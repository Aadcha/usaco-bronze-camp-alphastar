#include<iostream>
#include<fstream>
using namespace std;
int road[100], bessie[100];
int main()
{
    int n, m, c1=0, c2=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        for(int j=c1;j<a+c1;j++)
                road[j]=b;
        c1+=a;
    }
    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        for(int j=c2;j<a+c2;j++)
                bessie[j]=b;
        c2+=a;
    }
    int max=0;
    for(int i=0;i<100;i++)
    {
        if(bessie[i]-road[i]>max)
            max=bessie[i]-road[i];
    }
    cout<<max<<endl;
}
