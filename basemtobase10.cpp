#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int result=0;
    string a;
    cin>>a;
    int power;
    cin>>power;
    for(int i=a.length()-1;i>=0;i--)
    {
      int z=a[i]-48;
      result+=z*pow(power, a.length()-i-1);
      //cout<<z*pow(power, a.length()-i-1)<<endl;
    }
    cout<<result;
}

