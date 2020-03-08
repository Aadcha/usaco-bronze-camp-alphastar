#include<bits/stdc++.h>
using namespace std;
int n;
int s[101], t[101], b[101];
int starttime[1001], endtime[1001];
int check()
{
  int buckets = 0, b1 = 0;
  for (int t=1; t<=1000; t++) {
    if (starttime[t])
        b1+=b[starttime[t]];
    buckets=max(buckets, b1);
    if (endtime[t])
        b1-=b[endtime[t]];
  }
  return buckets;
}
int main()
{
  cin>>n;
  for (int i=1;i<=n;i++) {
    cin>>s[i]>>t[i]>>b[i];
    starttime[s[i]]=i;
    endtime[t[i]]=i;
  }
  cout<<check()<<endl;
  return 0;
}
