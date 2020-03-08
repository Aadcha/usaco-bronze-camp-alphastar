#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c[n];
  for(int i=0;i<n;i++)
  {
    cin>>c[i];
  }
  int optimal=n*n*100;
  for(int i=0;i<n;i++)
  {
    int d=0;
    for(int j=0;j<n;j++)
    d=d+j*c[(i+j)%n];
    if (d<optimal)
    optimal=d;
  }
  cout<<optimal;
}
