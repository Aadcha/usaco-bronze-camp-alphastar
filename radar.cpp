//#include<bits/stdc++.h>
#include<iostream>
//using namespace std;
#include<string>
using namespace std;
bool ispalindrome(int a)
{
    bool ok=true;
    string b=to_string(a);
    string c=b;
    for(int i=0;i<b.length();i++)
    {
      if(b[i]==c[b.length()-i-1])
      {
        continue;
      }
      else  
      {
        return false;
      }
    }
    return true;
}
int reversesum(int n)
{
  string a=to_string(n);
  string b="";
  //cout<<a<<endl;
  for(int i=0;i<a.length();i++)
  {
    b+=a[a.length()-i-1];
  }
  return stoi(b);
}
int main(){
  int n;
  cin>>n;
  int sum=n;
  int count=0;
  while(true)
  {
    if(ispalindrome(sum))
    {
        cout<<count<<" "<<sum<<endl;
        return 0;
    }
    else 
    {
        sum=sum+reversesum(sum);
        count++;
    }
  }
}
