#include<iostream>
#include<algorithm>
using namespace std;
struct votes
{
  int a, b, loc;
};
bool comp(votes z, votes s)
{
  return z.a>s.a;
}
int main()
{
  int n, k, max=0, bloc = 0;
  cin>>n>>k;
  votes t[n];
  for(int i=0;i<n;i++)
  {
    cin>>t[i].a>>t[i].b;
    t[i].loc = i+1;
  }
  sort(t, t+n, comp);/*
  for(int i=0;i<n;i++)
  {
    cout<<t[i].a<<" "<<t[i].b<<" "<<t[i].loc<<endl;
  }*/
  for(int i=0;i<k;i++)
  {
    if(t[i].b>max){
    max=t[i].b;
    bloc = t[i].loc;
    }
  }
  cout<<bloc;
}
