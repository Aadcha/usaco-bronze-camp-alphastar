#include<bits/stdc++.h>
using namespace std;
int a[256][2];
bool even(int x) {
  return x%2==0;
}
int main() {
  int n;
  cin>>n ;
  for(int i=0;i<n;i++) {
    char l;
    int v;
    cin>>l>>v;
    if (even(v)) {
      a[l][0]++;
    } 
    else {
      a[l][1]++;
    }
  }
  int result=0;
  for(int b=0;b<2;b++){
    for(int e=0; e<2;e++)
        for(int s=0;s<2;s++)
            for(int i=0;i<2;i++)
               for(int g=0;g<2;g++)
                    for(int o=0;o<2;o++)
                        for(int m=0;m<2;m++) {
    if (even((b+e+s+s+i+e) * (g+o+e+s) * (m+o+o))){
      result+=a['B'][b]*a['E'][e]*a['S'][s]*a['I'][i] *
                a['G'][g]*a['O'][o]*a['M'][m];
      }
    }
  }
  cout<<result<<endl;
}
