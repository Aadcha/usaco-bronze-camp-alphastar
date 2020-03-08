#include<iostream>
using namespace std;
int main()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int final=0;
  for(int i=0;i<n;i++)
  {
    int z=0;
    for(int j=0;j<n;j++)
    {
      if(a[j]>=a[i] and a[j]<=a[i]+k)
      z++;
    }
    if(z>final)
    final=z;
  }
  cout<<final<<endl;
}
