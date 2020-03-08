#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float max=0;
    int x[n], y[n];
    int pos=0, pos1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])>max)
            {
                max=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
                pos=i;
                pos1=j;
            }
        }
    }
    cout<<pos+1<<" "<<pos1+1<<endl;
}
