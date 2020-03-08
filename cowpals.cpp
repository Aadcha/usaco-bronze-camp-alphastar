#include<iostream>
#include<cmath>
using namespace std;
int sum(int a) 
{ 
    int output = 0; 
    for (int i=2; i<=sqrt(a); i++) 
    { 
        if (a%i==0) 
        { 
            if (i==(a/i)) 
                output += i; 
            else
                output += (i + a/i); 
        } 
    } 
    return (output + 1); 
} 
  
int main()
{
    int s;
    cin>>s;
    while(1)
    {
      if(s==sum(sum(s)) && sum(s)!=sum(sum(s)))
      {
        cout<<s<<" "<<sum(s)<<endl;
        break;
      }
      s++;
    }
}
