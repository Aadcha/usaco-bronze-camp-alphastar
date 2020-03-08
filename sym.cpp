#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cin>>x>>y;
    int count=0;
    int total=1;
    while(x%2==1 && y%2==1)
    {
        count++;
        x=x/2;
        y=y/2;
    }
    for(int i=0;i<count;i++)
    {
        total*=4;
    }
    cout<<(total+1)/3<<endl;
}
