#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool comp(int a, int b)
{
  return abs(a)<=abs(b);
}
int main()
{
  int t, n, total=0, count=1;
  cin>>t>>n;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b, b+n, comp);
  //for(int i=0;i<n;i++)
  //cout<<b[i]<<" ";
  while(total<t)
  {
    total+=abs(b[count]-b[count-1]);
    count++;
  }
  cout<<count-1;
}
