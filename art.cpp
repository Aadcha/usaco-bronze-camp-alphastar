#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int n, b[10][10];
bool colored(int c)
{
  for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
      if (b[i][j]==c) 
	return true;
  return false;
}
bool ontop(int c1, int c2)
{
  int t=n, bot=0, le=n, ri=0;
  for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
      if (b[i][j]==c2) {
	t=min(t, i);
	bot=max(bot, i);
	le=min(le, j);
	ri=max(ri, j);
      }
  for (int i=t;i<=bot;i++)
    for (int j=le;j<=ri;j++)
      if (b[i][j] == c1)
	return true;
  return false;
}
int main()
{
  cin>>n;
  for (int i=0;i<n;i++) {
    string s;
    cin>>s;
    for (int j=0;j<n;j++)
      b[i][j]=s[j]-'0';
  }
  int answer=0;
  for (int i=1;i<=9;i++)
    if (colored(i)){
      bool isfirst=true;
      for (int j=1;j<=9;j++)
	if (j!=i&&colored(j)&&ontop(i,j))
	  isfirst=false;
      if (isfirst) 
	answer++;
    }
  cout << answer << "\n";
  return 0;
}
