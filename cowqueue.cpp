#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool p[10000];
int main()
{
  int n;
  cin>>n;
  int e[n];
  int d[n];
  for(int i=0;i<n;i++)
  cin>>e[i]>>d[i];
		int next = 0;
		for(int a = 0; a < n; a++) {
			int cownext = -1;
			for(int i = 0; i < n; i++) {
				if(!p[i] && (cownext == -1 || e[i] < e[cownext])) {
					cownext = i;
				}
			}
			p[cownext] = true;
			if(e[cownext] > next) {
				next = e[cownext] + d[cownext];
			}
			else {
				next = next + d[cownext];
			}
		}
    cout<<next;
}
