#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  float joy[n+1];
  float price[n+1];
  float hfm[n+1];
  hfm[0]=0;
  int pos1=0, pos2=0, pos3=0;
  //int max1=0, max2=0, max3=0;
  for(int i=1;i<n+1;i++)
  {
    cin>>joy[i]>>price[i];
    hfm[i]=joy[i]/price[i];
    if(hfm[i]>=hfm[pos1])
    {
      pos3=pos2;
      pos2=pos1;
      pos1=i;
    }
    else if(hfm[i]>=hfm[pos2])
    {
      pos3=pos2;
      pos2=i;
    }
    else if(hfm[i]>=hfm[pos3])
    {
      pos3=i;
    }
  }
  cout<<price[pos1]+price[pos2]+price[pos3]<<endl;
  cout<<pos1<<endl<<pos2<<endl<<pos3<<endl;
}
