#include<iostream>
#include<string>
using namespace std;
int freq[26];
int freq1[26];
int freq2[26];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        string b;
        cin>>a>>b;
        for(int i=0;i<26;i++)
        {
             freq1[i]=0;
             freq2[i]=0;
        }
        for(int i=0;i<a.length();i++)
        {
            freq1[a[i]-97]++;
        }
        for(int i=0;i<b.length();i++)
        {
            freq2[b[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            freq[i]+=max(freq1[i], freq2[i]);
        }
    }
    for(int i=0;i<26;i++)
    {
        cout<<freq[i]<<endl;
    }
}
