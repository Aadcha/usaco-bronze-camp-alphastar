#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        if(a==1 && b==2)
        {
            c2++;
            c3++;
            c6++;
        }
        if(a==1 && b==3)
        {
            c1++;
            c4++;
            c5++;
        }
        if(a==2 && b==1)
        {
            c1++;
            c4++;
            c5++;
        }
        if(a==2 && b==3)
        {
            c2++;
            c3++;
            c6++;
        }
        if(a==3 && b==1)
        {
            c2++;
            c3++;
            c6++;
        }
        if(a==3 && b==2)
        {
            c1++;
            c4++;
            c5++;
        }
    }
    c1=max(c1, c2);
    c3=max(c1, c3);
    c4=max(c3, c4);
    c5=max(c4, c5);
    c6=max(c5, c6);
    cout<<c6;
}
