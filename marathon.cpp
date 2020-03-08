#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int c[n];
    long long int d[n];
    for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
    d[i]=a[i]*3600+b[i]*60+c[i];
    }
    sort(d, d+n);
    for(int i=0;i<n;i++)
    {
        cout<<d[i]/3600<<" ";
        d[i]=d[i]%3600;
        cout<<d[i]/60<<" ";
        d[i]=d[i]%60;
        cout<<d[i]<<endl;
    }
}
