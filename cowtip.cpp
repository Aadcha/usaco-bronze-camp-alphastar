#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char a[n][n];
  for(int i = 0; i < n; i++)
  {
			for(int j=0;j<n;j++)
      cin>>a[i][j];
	}
  int count=0;
		for(int i = n-1; i >= 0; i--) {
			for(int j = n-1; j >= 0; j--) {
				if(a[i][j] == '1') {
					count++;
					for(int k = 0; k <= i; k++) {
						for(int l = 0; l <= j; l++) {
							if(a[k][l] == '0') {
								a[k][l] = '1';
							}
							else {
								a[k][l] = '0';
							}
						}
					}
				}
			}
		}
    cout<<count;
}
