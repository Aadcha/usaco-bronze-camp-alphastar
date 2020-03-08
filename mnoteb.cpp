#include<iostream>
using namespace std;
int a, b;
int c[100000];
int d[100000];
int binarysearch (int low, int high, int ans) {
  if (low == high)
    return low;
  int mid = (low+high)/2;
  if (d[mid+1] <= ans) return binarysearch (mid+1, high, ans);
  else                    return binarysearch (low, mid, ans);
}
int main () {
  cin>>a>>b;
  d[0] = 0;
  for(int i=0;i<a;i++) {
    cin>>c[i];
    d[i+1]=d[i]+c[i];
  }
  for (int i=0; i<b;i++) {
    int temp;
    cin>>temp;
    cout<<binarysearch (0,a-1,temp) + 1<<endl;
  }
  return 0;
}
