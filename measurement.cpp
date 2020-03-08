#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int d[n];
  string c[n];
  int change[n];
  for(int i=0;i<n;i++)
  {
    cin>>d[i]>>c[i]>>change[i];  
  }
   int count=0;
  int bm=7, em=7, mm=7;
  bool bcheck=true, echeck=true, mcheck=true;
  for(int j = 1; j <= 100; j++) {
			for(int i = 0; i < n; i++) {
				if(d[i] == j) {
					if(c[i]==("Bessie")) {
						bm += change[i];
					}
					if(c[i]==("Elsie")) {
						em += change[i];
					}
					if(c[i]==("Mildred")) {
						mm += change[i];
					}
				}
      }
      int highest=max(bm, em);
      highest=max(highest, mm);
      bool bessiewasprev= bm==highest;
      bool elsiewasprev= em==highest;
      bool mildredwasprev= mm==highest;  
      if(bcheck != bessiewasprev || echeck != elsiewasprev || mcheck != mildredwasprev) {
				count++;
			}
			bcheck = bessiewasprev;
			echeck = elsiewasprev;
			mcheck = mildredwasprev;
  }
  cout<<count;
}
