#include<bits/stdc++.h>
using namespace std;
struct hay{
    long long int pos;
    long long int size;
};
bool comp(hay a,hay b)
{
  return a.pos < b.pos;
}
int n;
hay bales[10000];
int main(){
    cin>>n;
    for (int i=0;i<n;i++){
      cin>>bales[i].size>>bales[i].pos;
    }
    sort(bales,bales+n,comp);
    long long int ans=0;
    for (int i=0;i<n-1;i++){
      long long int area=bales[i+1].pos-bales[i].pos;
      long long int lb=i;
      long long int rb=i+1;
      while (lb>=0&&rb<=n-1){
        bool b=0;
        long long int current=bales[rb].pos-bales[lb].pos;
        if (current>bales[lb].size){
          lb--;
          b=true;
        }
       if (current>bales[rb].size){
          rb++;
           b = true;
        }
        if (b==0){
          break;
        }
      }
      if (lb>=0&&rb<=n-1)
      {
        ans+=area;
      }
    }
    cout<<ans;
}
