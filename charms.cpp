#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int l, c, n;
    cin>>l>>c>>n;
    int a[c];
    int b[c];
    for(int i=0;i<c;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<c;i++)
    {
        cout<<a[i]+abs(b[i]-n)<<endl;
    }
}
