#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x[n], x1[n];
  int y[n], y1[n];
  for(int i=0;i<n;i++)
  {
    cin>>x[i]>>y[i];
    x1[i]=x[i];
    y1[i]=y[i];
  }
  sort(x, x+n);
  sort(y, y+n);
  int minx=x[0], miny=y[0], maxx=x[n-1], maxy=y[n-1];
  int ans=(maxx-minx)*(maxy-miny);
  for(int i=0;i<n;i++)
  {
    minx=x[0];
    maxx=x[n-1];
    miny=y[0];
    maxy=y[n-1];
    if(x1[i]==minx)
      minx=x[1];
    if(x1[i]==maxx)
      maxx=x[n-2];
    if(y1[i]==miny)
      miny=y[1];
    if(y1[i]==maxy)
      maxy=y[n-2];
    //cout<<minx<<" "<<maxx<<endl<<miny<<" "<<maxy<<endl;
    if((maxx-minx)*(maxy-miny)<ans)
        ans=(maxx-minx)*(maxy-miny);
  }
  cout<<ans;
}
