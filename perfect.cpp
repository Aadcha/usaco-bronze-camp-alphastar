#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int med[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        sort(a[i], a[i]+n);
        if(n%2==1)
        med[i]=a[i][(n-1)/2];
        else if(n%2==0)
        med[i]=(a[i][(n-1)/2]+a[i][(n-1)/2+1])/2;
    }
    sort(med, med+n);/*
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
      cout<<endl;
    }
    for(int i=0;i<n;i++)
      cout<<med[i]<<" ";*/
        if(n%2==0)
            cout<<(med[(n-1)]+med[(n-1)/2])/2;
        else
            cout<<med[(n-1)/2];
}
