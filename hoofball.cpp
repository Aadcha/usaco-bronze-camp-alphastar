#include <bits/stdc++.h>
using namespace std;
int n, a[100], p[100];   
int pass(int i)
{
  int ln=-1, ld = 1000;
  int rn=-1, rd = 1000;
  for (int j=0;j<n;j++){
    if (a[j]<a[i]&&a[i]-a[j]<ld) {
      ln=j;
      ld=a[i]-a[j];}
  }
  for (int j=0;j<n;j++){
    if (a[j]>a[i]&&a[j]-a[i]<rd){
      rn=j;
      rd=a[j]-a[i];}
  }
  if (ld<=rd) return ln;
  return rn;
}

int main( )
{
  cin>>n;
  for (int i=0;i<n;i++)
    cin>>a[i];
  for (int i=0; i<n; i++) 
    p[pass(i)]++;
  int count=0;
  for (int i=0;i<n;i++) {
    if (p[i]==0) 
      count++;
    if (i<pass(i)&&pass(pass(i))==i&& p[i]==1&&p[pass(i)]==1)
      count++; 
  }
  cout<<count<<endl;;
  return 0;
}
