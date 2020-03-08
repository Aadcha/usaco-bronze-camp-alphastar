#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
//string answer;
using namespace std;
int main()
    {
    stringstream ss;
    string a;
    cin>>a;
    string b="";
    for(int i=0;i<a.length();i++)
    {
    string k;
    if(a[i]=='0')
      k="0000";
    if(a[i]=='1')
      k="0001";
    if(a[i]=='2')
      k="0010";
    if(a[i]=='3')
      k="0011";
    if(a[i]=='4')
      k="0100";
    if(a[i]=='5')
      k="0101";
    if(a[i]=='6')
      k="0110";
    if(a[i]=='7')
      k="0111";
    if(a[i]=='8')
      k="1000";
    if(a[i]=='9')
      k="1001";
    if(a[i]=='A')
      k="1010";
    if(a[i]=='B')
      k="1011";
    if(a[i]=='C')
      k="1100";
    if(a[i]=='D')
      k="1101";
    if(a[i]=='E')
      k="1110";
    if(a[i]=='F')
      k="1111";
    b+=k;
    }
    string c="";
    string d="";
    //cout<<b;
    if(b=="0000"){
        cout<<0<<endl;
        return 0;}
    else
    {
        if(b.length()%3==1)
            c="00"+b;
        else if(b.length()%3==2)
            c="0"+b;
        else
            c=b;
        for(int i=0;i<c.length();i+=3)
        {
            //cout<<"Hi"<<endl;
            if(c[i]=='0' && c[i+1]=='0' && c[i+2]=='0' )
            {
                d+="0";
            }
            if(c[i]=='0' && c[i+1]=='0' && c[i+2]=='1' )
            {
                d+="1";
            }
            if(c[i]=='0' && c[i+1]=='1' && c[i+2]=='0' )
            {
                d+="2";
            }
            if(c[i]=='0' && c[i+1]=='1' && c[i+2]=='1' )
            {
                d+="3";
            }
            if(c[i]=='1' && c[i+1]=='0' && c[i+2]=='0' )
            {
                d+="4";
            }
            if(c[i]=='1' && c[i+1]=='0' && c[i+2]=='1' )
            {
                d+="5";
            }
            if(c[i]=='1' && c[i+1]=='1' && c[i+2]=='0' )
            {
                d+="6";
            }
            if(c[i]=='1' && c[i+1]=='1' && c[i+2]=='1' )
            {
                d+="7";
            }
        }
        while(d[0]=='0')
        {
            d.erase(0, 1);
        }
        cout<<d;
    }
}
