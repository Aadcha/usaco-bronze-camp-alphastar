#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
  int ans = 0;
  int n;
  int check = 1001;
  int ans1;
  int iscovered[999];
  cin >> n;
  int start[n], end[n];
  for (int i=0;i<999;i++) {
    iscovered[i]=0;
  }
  for (int i=0;i<n;i++) {
    cin >> start[i] >> end[i];
    for (int j=start[i]; j<end[i];j++) {
      iscovered[j]+=1;
    }
  }
  for (int i=0;i<n;i++) {
    ans1 = 0;
    for (int j=start[i];j<end[i];j++) {
      if (iscovered[j] == 1) {
        ans1 += 1;
      }
    }
    if (ans1 < check) {
      check = ans1;
    }
  }
  for (int i=0;i<999;i++) {
    if (iscovered[i] > 0) {
      ans += 1;
    }
  }
  ans-=check;
  cout <<ans;
}
