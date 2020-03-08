#include<bits/stdc++.h>
using namespace std;
int comp(int a, int b){
  return a>b;
}
int price[1000];
int main () {
    int n, m,  sum, maxr, t, bp, b;
    cin>>n>>m;
    for (int i=0;i<m;i++)
        cin>>price[i];
    sort(price, price+m, comp);
    bp=price[0];
    maxr=price[0];
    for (int p=0;p<m;p++) {
        t=price[p];
        b=p+1;
        if(b>n) 
          b=n;
        sum=b*t;
        if (sum>maxr) {
            maxr=sum;
            bp=t;
        }
    }
    cout<<bp<<" "<<maxr;
}
