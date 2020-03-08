#include<bits/stdc++.h>
using namespace std;
int a[25][25];
int main () {
    int n, s;
    cin>>n>>s;
    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) {
	    a[j][i]=s++;
	    if (s==10)
        s=1;
	}
    }
    for (int i=0;i<n;i++) {
	for (int j=0;j<i;j++) {
	    if (j>0) 
        cout<<" ";
	    cout<<" ";
	}
        for (int j=i;j<n;j++) {
	    if (j>0) 
        cout<<" ";
	    cout<<a[i][j];
	}
  cout<<endl;
    }
}
