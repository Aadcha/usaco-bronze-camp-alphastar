#include<iostream>
using namespace std;
string a, b;
char check(string a, string b)
{
    int i, j, z;
    int count=0;
    for (i=0;b[i];i++) {
  	    z=0;
	  for (j=0;a[j]&&b[j+i];j++) {
	    if (a[j]!=b[j+i]) 
      break;
	    z++;
	}
	if (b[j+i]=='\0'&&z>count)
	    count=z;
    }
    return count;
}
int main() {
    char c[100];
    char d[100];
    cin>>c>>d;
    int a = check(c, d);
    int b = check(d, c);
    cout<<max(a, b);
}
