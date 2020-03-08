#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int x, y;
  cin>>x>>y;
  int ans = 0;
  int last = 1;
  int current = 1;
  while(true) {
    if((current==1 and x<=y and y<=x+last) || (current==-1 and x-last<=y and y<=x)) 
    {
      ans += abs(y-x);
      cout << ans << endl;
      break;
    } 
    else 
    {
      ans+=last*2;
      last*=2;
      current*=-1;
    }
  }
}
