#include<iostream>
using namespace std;
int freq[10];
int main()
{
    int a, b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
       int c=i;
       while(c>0)
      {
        if(c%10==0)
        freq[0]++;
        if(c%10==1)
        freq[1]++;
        if(c%10==2)
        freq[2]++;
        if(c%10==3)
        freq[3]++;
        if(c%10==4)
        freq[4]++;
        if(c%10==5)
        freq[5]++;
        if(c%10==6)
        freq[6]++;
        if(c%10==7)
        freq[7]++;
        if(c%10==8)
        freq[8]++;
        if(c%10==9)
        freq[9]++;
        c=c/10;
      }
    }
    for(int i=0;i<10;i++)
    cout<<freq[i]<<" ";
}
