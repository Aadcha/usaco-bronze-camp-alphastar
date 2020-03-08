#include<iostream>
#include<algorithm>
using namespace std;
int amount[7];
int main()
{
  int n;
  cin>>n;
  string a;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    int k;
    cin>>k;
    if(a=="Bessie")
    {
      amount[0]+=k;
    }
    if(a=="Elsie")
    {
      amount[1]+=k;
    }
    if(a=="Daisy")
    {
      amount[2]+=k;
    }
    if(a=="Gertie")
    {
      amount[3]+=k;
    }
    if(a=="Annabelle")
    {
      amount[4]+=k;
    }
    if(a=="Maggie")
    {
      amount[5]+=k;
    }
    if(a=="Henrietta")
    {
      amount[6]+=k;
    }
  }
    int min=100000000;
    for(int i=0;i<7;i++)
    {
        if(amount[i]<=min)
        {
          min=amount[i];
        }
    }
    int max=9999999;
    int pos=0;
    for(int i=0;i<n;i++)
    {
      if(amount[i]>min && amount[i]<max)
      {
        max=amount[i];
        pos=i;
      }
    }
    if(n==1)
    {
        cout<<a;
    }
    else if(max==9999999 )
     cout<<"Tie"<<endl;
    else
    {
      if(pos==0)
      {
        cout<<"Bessie"<<endl;
      }
      if(pos==1)
      {
        cout<<"Elsie"<<endl;
      }
      if(pos==2)
      {
        cout<<"Daisy"<<endl;
      }
      if(pos==3)
      {
        cout<<"Gertie"<<endl;
      }
      if(pos==4)
      {
        cout<<"Annabelle"<<endl;
      }
      if(pos==5)
      {
        cout<<"Maggie"<<endl;
      }
      if(pos==6)
      {
        cout<<"Henrietta"<<endl;
      }
    }
}
