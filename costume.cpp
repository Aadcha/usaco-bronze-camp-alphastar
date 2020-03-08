#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
#include <stdio.h> 
int bsearch(int a[], int i, int sum,int low, int n)
{
  int c=low;
  int high=n-1;
  while(low+1<high)
  {
      int mid=(low+high)/2;
      if(a[mid]+i>sum)
        high=mid;
      if(a[mid]+i<=sum)
        low=mid; 
  }
   if(a[high]+i<=sum)
      return high-c;
  else 
      return low-c;
}
int main()
{
  int n, s, count=0;
  cin>>n>>s;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a, a+n);
  for(int i=0;i<n;i++)
  {
    if(a[i]>=s)
      break;
    count+=bsearch(a, a[i], s, i, n);
  }
  cout<<count<<endl;
}
