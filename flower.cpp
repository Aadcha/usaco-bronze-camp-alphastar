#include<iostream>
int checkflow[10000];
using namespace std;
int main () {
    int a, b, c, d;
    cin>>a>>b;
    for (int i=0; i<b;i++)
    {
        cin>>d>>c;
        for (int j=d-1;j<a;j+=c)
            checkflow[j] = 1;
    }
    d=0;
    for (int i=0;i<a;i++)
        if (checkflow[i]==0)
                d++;
    cout<<d;
}
