#include<iostream>
using namespace std;
int main()
{
  int n, max=-1, count=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    if(i*i<=n && i>max)
    max=i;
  } 
  //cout<<max<<endl;
  for(int i=0;i<=max;i++)
  {
    for(int j=0;j<=max;j++)
    {
      for(int k=0;k<=max;k++)
      {
        for(int l=0;l<=max;l++)
        {
          if((i*i+j*j+k*k+l*l)==n)
          count++;
    //      cout<<(i*i+j*j+k*k+l*l)<<endl;
        }
      }
    }
  }
  cout<<count;
}
