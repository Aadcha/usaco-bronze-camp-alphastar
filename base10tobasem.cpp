#include<iostream>
#include<cmath>
using namespace std;
long long int answer[10000];
int main()
{
    int a;
    int i=0;
    double z=a;
    int base;
    cin>>a>>base;
    int result=0;
    int count=0;
    while(a>0)
    {
      answer[i]=a%base;
      a/=base;
      i++;
    }
    for(int j=i-1;j>=0;j--)
    cout<<answer[j];
}

