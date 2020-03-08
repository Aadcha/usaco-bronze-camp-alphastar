#include<bits/stdc++.h>
long x[1100], y[1100], r[1100];
using namespace std;
long s(long v){
  return v*v;
}
int a, b, c, n;
int main() {
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>x[i]>>y[i]>>r[i];
        if (x[i]==0 && y[i]==0) 
          b=i;
    }
    a=-1;
    for (int i=1;i<n;i++) {
        for (int j=0;j<n;j++)
            if (j!=a && s(x[b]-x[j])+s(y[b]-y[j]) ==s(r[b]+r[j]))
               c=j;
        a=b;
        b=c;
    }
    cout<<x[b]<<" "<<y[b]<<endl;
}
